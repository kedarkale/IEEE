int d = 900; //delay

void setup() {

  pinMode(2, OUTPUT); //STEPPER1 STEPX
  pinMode(3, OUTPUT); //STEPPER1 DIR
  pinMode(4, OUTPUT); //STEPPER2 STEPY
  pinMode(5, OUTPUT); //STEPPER2 DIR
  pinMode(6, OUTPUT); //MS1
  pinMode(7, OUTPUT); //MS2
  pinMode(8, OUTPUT); //MS3
  pinMode(11, OUTPUT); //LASER CONTROL
  laser_off();
  microstep(8);
}

void box0()
{
  microstep(16);
  d = 100;

  stepX(-20);
  stepY(-20);
  laser_on();
  stepX(40);
  stepY(40);
  stepX(-40);
  stepY(-40);
  laser_off();

  stepX(20);
  stepY(20);

}
void face()
{
  microstep(8);
  d = 750;
  laser_on();
  stepX(5);
  stepY(5);
  stepX(-5);
  stepY(-5);
  laser_off();
  //stepY();
  stepX(10);
  laser_on();
  stepX(5);
  stepY(5);
  stepX(-5);
  stepY(-5);
  laser_off();
  stepX(-2);
  laser_on();
  stepY(-4);
  laser_off();
  stepY(-3);
  stepX(-4);
  laser_on();
  stepX(7);
  stepX(-7);
  laser_off();
  stepY(7);

  stepX(-4);

  ///stepY(10);
  laser_off();


}
void loop() {
  // put your main code here, to run repeatedly:


  //box0();
  //dots();

  for (int z = 0; z < 10; z++)
  {
    box_in_out();
  }
  
  //star();

  for (int z = 0; z < 50; z++)
  {
    face();
  }
  for (int z = 0; z < 10; z++)
  {
    spiral();
  }

  for (int z = 0; z < 10; z++)
  {
    plus();
  }

  for (int z = 0; z < 10; z++)
  {
    dj_square();
  }

  for (int z = 0; z < 10; z++)
  {
    line_fade();
  }

  for (int z = 0; z < 50; z++)
  {
    moving_box();
  }

  for (int z = 0; z < 50; z++)
  {
    d = 270;
    microstep(16);
    A();
    stepX(17);
    C();
    stepX(17);
    E();
    stepX(-34);
  }

  for (int z = 0; z < 50; z++)
  {
    d = 270;
    microstep(16);
    I();
    stepX(15);
    E();
    stepX(15);
    E();
    stepX(15);
    E();
    stepX(-45);
  }

  for (int z = 0; z < 40; z++)
  {
    box();
  }

}



void I ()
{
  laser_on();
  stepX(12);
  laser_off();
  stepX(-6);
  laser_on();
  stepY(-12);
  laser_off();
  stepX(6);
  laser_on();
  stepX(-12);
  laser_off();
  stepY(12);

}

void I_test ()
{
  {
    laser_on();
    stepX(2);
    laser_off();
    stepX(-1);
    laser_on();
    stepY(-2);
    laser_off();
    stepX(1);
    laser_on();
    stepX(-2);
    laser_off();
    stepY(2);

  }
}

void E_og()
{
  laser_off();
  stepX(6);
  laser_on();
  stepX(-6);
  stepY(3);
  stepX(3);
  laser_off();
  stepX(-3);
  laser_on();
  stepY(3);
  stepX(6);
  laser_off();
  stepX(-6);
  stepY(-6);
}
void E ()
{
  laser_off();
  stepX(12);
  laser_on();
  stepX(-12);
  stepY(-12);
  stepX(12);
  laser_off();
  stepX(-6);
  stepY(6);
  laser_on();
  stepX(-6);
  laser_off();
  stepY(6);
}

void box()
{
  microstep(16);
  d = 300;

  laser_on();
  stepX(24);
  stepY(24);
  stepX(-24);
  stepY(-24);
}

void a()
{
  laser_off();
  stepY(-12);
  laser_on();
  for (int l = 0; l < 6; l++)
  {
    stepY(2);
    stepX(1);
  }
  for (int l = 0; l < 6; l++)
  {
    stepY(-2);
    stepX(1);
  }
  laser_off();
  for (int l = 0; l < 3; l++)
  {
    stepX(-1);
    stepY(2);
  }
  laser_on();
  stepX(-6);
  laser_off();
  stepX(-3);
  stepY(6);


}

void A()
{
  laser_off();
  stepY(-12);
  laser_on();
  stepY(12);
  stepX(12);
  stepY(-6);
  stepX(-12);
  laser_off();
  stepX(12);
  laser_on();
  stepY(-6);
  laser_off();
  stepX(-12);
  stepY(12);
}

void C ()
{
  laser_on();
  stepY(-12);
  stepX(12);
  laser_off();
  stepY(12);
  laser_on();
  stepX(-12);
  laser_off();
}

void T()
{
  laser_off();
  stepY(12);
  laser_on();
  stepX(12);
  laser_off();
  stepX(-6);
  laser_on();
  stepY(-12);
  laser_off();
  stepX(-6);

}

void H()
{
  laser_on();
  stepY(-12);
  laser_off();
  stepY(6);
  laser_on();
  stepX(12);
  laser_off();
  stepY(-6);
  laser_on();
  stepY(12);
  laser_off();
  stepX(-12);
}


void box_in_out ()
{
  microstep(8);
  d = 500;
  laser_on();

  for (int l = 30 ; l > 0; l--)
  {
    for (int m = 0; m < 2; m++)
    {
      stepX(l);
      stepY(l);
      stepX(-l);
      stepY(-l);
    }
  }
  for (int l = 1 ; l < 31; l++)
  {
    for (int m = 0; m < 2; m++)
    {
      stepX(l);
      stepY(l);
      stepX(-l);
      stepY(-l);
    }
  }
}

void diagonal ()
{
  laser_on();
  for (int l = 0; l < 25; l++)
  {
    stepX(1);
    stepY(-1);
  }

  laser_off();
  stepX(-25);
  stepY(25);
}

void star()
{
  microstep(16);
  d = 270;

  laser_on();
  for (int i = 0; i < 20; i++)
  {
    stepY(4);
    stepX(2);
  }
  for (int i = 0; i < 20; i++)
  {
    stepY(-4);
    stepX(2);
  }
  for (int i = 0; i < 20; i++)
  {
    stepY(3);
    stepX(-4);
  }
  stepX(80);
  for (int i = 0; i < 20; i++)
  {
    stepY(-3);
    stepX(-4);
  }

}

void line_fade ()
{
  d = 250;
  microstep(4);

  for (int l = 0; l < 30; l++)
  {
    for (int m = 0; m < 1; m++)
    {
      laser_on();
      stepX(90);
      laser_off();
      stepX(-90);
    }
    stepY(-2);
  }


  for (int l = 0; l < 30; l++)
  {
    for (int m = 0; m < 1; m++)
    {
      laser_on();
      stepX(90);
      laser_off();
      stepX(-90);
    }
    stepY(2);
  }

}


void dots ()
{

  d = 500;
  for (int l = 0; l < 9; l++)
  {
    for (int m = 0; m < 9; m++)
    {
      laser_off();
      stepX(15);
      laser_on();
      delay(10);
      laser_off();

    }
    stepX(-135);
    stepY(-15);
  }
  stepY(135);
}

void spiral ()
{
  microstep(16);
  d = 500;

  laser_on();
  stepX(100);
  stepY(-100);
  stepX(-80);
  stepY(80);
  stepX(60);
  stepY(-60);
  stepX(-40);
  stepY(40);
  stepX(20);
  stepY(-20);
  stepX(-10);
  stepY(10);

  stepY(-10);
  stepX(10);
  stepY(20);
  stepX(-20);
  stepY(-40);
  stepX(40);
  stepY(60);
  stepX(-60);
  stepY(-80);
  stepX(80);
  stepY(100);
  stepX(-100);

}

void plus ()
{
  microstep(16);
  d = 300;

  for (int l = 1; l < 25; l++)
  {
    laser_off();
    stepY(-l);
    laser_on();
    stepX(2 * l);
    laser_off();
    stepY(-l);
    stepX(-l);
    laser_on();
    stepY(2 * l);
    laser_off();
    stepX(-l);
  }

  for (int l = 24; l > 0; l--)
  {
    laser_off();
    stepY(-l);
    laser_on();
    stepX(2 * l);
    laser_off();
    stepY(-l);
    stepX(-l);
    laser_on();
    stepY(2 * l);
    laser_off();
    stepX(-l);
  }
}

void dj_square()
{
  laser_on();
  microstep(4);
  d = 500;

  for (int l = 0; l < 5; l++)
  {
    stepY(-20);
    stepX(2);
    stepY(20);
    stepX(2);
  }


  for (int l = 0; l < 5; l++)
  {
    stepX(-20);
    stepY(-2);
    stepX(20);
    stepY(-2);

  }
  stepY(20);
  stepX(-20);
}

void moving_box()
{
  microstep(16);
  d = 270;

  for (int l = 0; l < 40; l++)
  {
    box();
    stepX(1);
  }
  for (int l = 0; l < 40; l++)
  {
    box();
    stepY(-1);
  }
  for (int l = 0; l < 40; l++)
  {
    box();
    stepX(-1);
  }
  for (int l = 0; l < 40; l++)
  {
    box();
    stepY(1);
  }
}















///***KEDAR K. KALE***///

void stepX (int steps)
{
  if (steps > 0) {

    digitalWrite(3, LOW);

    for (int i = 0; i < steps; i++)
    {
      digitalWrite(2, HIGH);
      delayMicroseconds(d);
      digitalWrite(2, LOW);
      delayMicroseconds(d);
    }
  }
  else {

    digitalWrite(3, HIGH);

    for (int i = 0; i > steps; i--)
    {
      digitalWrite(2, HIGH);
      delayMicroseconds(d);
      digitalWrite(2, LOW);
      delayMicroseconds(d);
    }

  }
}

void stepY (int steps)
{
  if (steps > 0) {

    digitalWrite(5, LOW);

    for (int i = 0; i < steps; i++)
    {
      digitalWrite(4, HIGH);
      delayMicroseconds(d);
      digitalWrite(4, LOW);
      delayMicroseconds(d);
    }
  }
  else {

    digitalWrite(5, HIGH);

    for (int i = 0; i > steps; i--)
    {
      digitalWrite(4, HIGH);
      delayMicroseconds(d);
      digitalWrite(4, LOW);
      delayMicroseconds(d);
    }

  }
}

void laser_on()
{
  digitalWrite(11, HIGH);
}

void laser_off()
{
  digitalWrite(11, LOW);
}

void microstep (int ms)
{
  switch (ms)
  {
    case (1) : digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      break;

    case (2) : digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      break;

    case (4) : digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      break;

    case (8) : digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
      break;

    case (16) : digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      break;

    default : digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      break;
  }
}

