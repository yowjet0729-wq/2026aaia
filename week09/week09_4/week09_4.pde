//week09-4好玩的程式設計(用陣列、for迴圈，畫很多小氣球)
//修改自week09-3好玩的程式設計(氣球會變大)
PImage img;//宣告變數(圖)
void setup() {//設定函式
  size(600, 500);//設定視窗大小
  img =loadImage("balloon.png");
}
float[]x=new float[200]; //java陣列x座標
float[]y=new float[200]; //java陣列y座標
float[]s=new float[200]; //java陣列s氣球大小
int N=0;
float s2=0.1;
void draw() {//畫圖函式(每秒60次)
  background(#FFFFF2);//背景是淡黃色
  for (int i=0; i<N; i++) {
    image(img, x[i], y[i], 96*s[i], 132*s[i]);//(不同座標、大小)
    y[i]--;//氣球往上飛
  }
  if (mousePressed) {
    s2=s2*1.02;
    image(img, mouseX-96/2*s2, mouseY-132*s2, 96*s2, 132*s2);
  } else s2=0.1;
}
void mouseReleased() {//mouse放開時，氣球設定好，往上飛
  x[N]=mouseX-96/2*s2;//設定新氣球的座標
  y[N]=mouseY-132/2*s2;//設定新氣球的座標
  s[N]=s2;//設定新氣球大小
  N++;//確認增加一個氣球
}
