
struct bottle {
  float x = -0.5;
  float y = -0.5;
  float z = 0.50;
};
struct cup{
  float x = -0.6;
  float y = 0.3;
  float z = 0.6;
};
struct quaternions{
  float w;
  float x;
  float y;
  float z;
  float Y;          //YAW = Z
  float P;          //PITCH= Y
  float R;          //ROW - X
  float ang;
  float ang2;
  float hyp;
  float cy;
  float sy;
  float cp;
  float sp;
  float cr;
  float sr;
  const double d2r = 0.01745329251;
};
struct pouring{
  float x;
  float y;
  float z;
};
struct retract{
  float x;
  float y;
  float z;
};