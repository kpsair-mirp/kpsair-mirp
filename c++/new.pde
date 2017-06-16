void drawCircles(float R, int N){
   for(int i = 0 ; i<N ; ++i)
   for(int j = 0 ; j<N ; ++j)
   ellipse(mouseX+i*circleGap, mouseY+j*circleGap, 2*R, 2*R);
}