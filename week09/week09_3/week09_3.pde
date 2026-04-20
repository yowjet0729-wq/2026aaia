//week09-3好玩的程式設計(氣球會變大)
PImage img;//宣告變數(圖)
void setup() {//設定函式
  size(600,500);//設定視窗大小
  img =loadImage("balloon.png");
}
float x, y, s =0.1;//一開始的氣球比較小
void draw(){//畫圖函式(每秒60次)
  background(#FFFFF2);//背景是淡黃色
  ///image(img,mouseX-96/2,mouseY-132,96,132);
  if (mousePressed){
      s=s*1.02;
      image(img,mouseX-96/2*s,mouseY-132*s,96*s,132*s);
  }else s=0.1;//方開mouse時，氣球會變小
 }
//這裡座標，稍微改一下
//讓手拿氣球下面綁起來地方
