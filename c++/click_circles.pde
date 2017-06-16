int displayWidth = 500;
int displayHeight = 500;

color ellipseColor = color(0);
color ellipseColor_white = color(255);
color ellipseColor_black = color(0);
float radius = 10;
int numCircles = 30;
float circleGap = 10.5*radius;

int x = 100;
int y = 100;
void setup(){
size(displayWidth,displayHeight);
}

void draw() {
  if (mousePressed) {
    drawTarget(mouseX, mouseY, numCircles);
        delay(1);
  }
}
void drawTarget(int x, int y) {
}
void drawTarget(int x, int y,  int n){
  
  fill(ellipseColor_white);
drawCircles (8*radius, numCircles,x,y);

  fill(ellipseColor_black);
drawCircles (7*radius, numCircles,x,y);

  fill(ellipseColor_white);
drawCircles (6*radius, numCircles,x,y);

  fill(ellipseColor_black);
drawCircles (5*radius, numCircles,x,y);

  fill(ellipseColor_white);
drawCircles (4*radius, numCircles,x,y);

  fill(ellipseColor_black);
drawCircles (3*radius, numCircles,x,y);

  fill(ellipseColor_white);
drawCircles (2*radius, numCircles,x,y);

  fill(ellipseColor_black);
drawCircles (1*radius, numCircles,x,y);
}

void drawCircles(float R, int N , int x , int y ){
  ellipse(x,y,2*R,2*R);
}