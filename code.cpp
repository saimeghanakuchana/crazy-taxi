#include<simplecpp>


//defining right for user
Rectangle right(Rectangle T){

    Rectangle Y(T.getX()+100,T.getY()+0,50,75);
    Y.setColor(COLOR(253,0,0));
    Y.setFill();

    return Y;
    }

//ddefining left for user
Rectangle left(Rectangle T){

      Rectangle Y(T.getX()-100,T.getY()+0,50,75);
    Y.setColor(COLOR(253,0,0));
    Y.setFill();

    return Y;
    }


Rectangle akadeundu(Rectangle T){

    Rectangle Y(T.getX()+0,T.getY()+0,50,75);
    Y.setColor(COLOR(253,0,0));
    Y.setFill();

    return Y;
    }


//defining down
Rectangle down(Rectangle T){

    Rectangle Y(T.getX()+0,T.getY()+80,50,75);
    Y.setColor(COLOR(0,0,204));
    Y.setFill();

    return Y;
    }

// function to create an effect of the forward motion of the player
Rectangle effect(Rectangle T){

    Rectangle Y(T.getX()+0,T.getY()-10,50,75);
    Y.setColor(COLOR(253,0,0));
    Y.setFill();

    return Y;
    }

main_program{




//define rectangles

initCanvas("GAME",500,500);
Text t(250,250,"START");
t.setColor(COLOR(253,0,0));
wait(0.5);


Rectangle R1(100,-2000,10,5000);
Rectangle R2(200,-2000,10,5000);
Rectangle R3(300,-2000,10,5000);
Rectangle R4(400,-2000,10,5000);


Rectangle R5(50,-2000,100,5000);
R5.setColor(COLOR(204,255,153));
R5.setFill();

Rectangle R6(450,-2000,100,5000);
R6.setColor(COLOR(204,255,153));
R6.setFill();

Rectangle R7(250,-2000,300,5000);
R7.setColor(COLOR(160,160,160));
R7.setFill();

R2.setColor(COLOR(0,0,0));
R2.setFill();
R3.setColor(COLOR(0,0,0));
R3.setFill();
R1.setColor(COLOR(0,0,0));
R1.setFill();
R4.setColor(COLOR(0,0,0));
R4.setFill();
//1st level


Rectangle A(250,462.5,50,75);               // player
        A.setColor(COLOR(253,0,0));
        A.setFill();


Rectangle A1(250,-312.5,50,75);
A1.setColor(COLOR(0,0,204));
    A1.setFill();

Rectangle A2(350,-312.5,50,75);
A2.setColor(COLOR(0,0,204));
    A2.setFill();

Rectangle A3(150,-582.5,50,75);
A3.setColor(COLOR(0,0,204));
    A3.setFill();

Rectangle A4(350,-582.5,50,75);
A4.setColor(COLOR(0,0,204));
    A4.setFill();

Rectangle A5(150,-1452.5,50,75);
A5.setColor(COLOR(0,0,204));
    A5.setFill();

Rectangle A6(250,-1722.5,50,75);
A6.setColor(COLOR(0,0,204));
    A6.setFill();



Rectangle A7(150,-2492.5,50,75);
A7.setColor(COLOR(0,0,204));
    A7.setFill();

Rectangle A8(250,-2492.5,50,75);
A8.setColor(COLOR(0,0,204));
    A8.setFill();

Rectangle A9(250,-2762.5,50,75);
A9.setColor(COLOR(0,0,204));
    A9.setFill();

Rectangle A10(150,-3632.5,50,75);
A10.setColor(COLOR(0,0,204));
    A10.setFill();

Rectangle A11(250,-3632.5,50,75);
A11.setColor(COLOR(0,0,204));
    A11.setFill();

Rectangle A12(150,-3902.5,50,75);
A12.setColor(COLOR(0,0,204));
    A12.setFill();

Rectangle A13(250,-3902.5,50,75);
A13.setColor(COLOR(0,0,204));
    A13.setFill();

 Rectangle A14(250,-3902.5,50,75);
A14.setColor(COLOR(0,0,204));
    A14.setFill();

    Rectangle A15(150,-4712.5,50,75);
A15.setColor(COLOR(0,0,204));
    A15.setFill();


Rectangle A16(350,-4712.5,50,75);
A16.setColor(COLOR(0,0,204));
    A16.setFill();

  Rectangle A17(250,-4982.5,50,75);
A17.setColor(COLOR(0,0,204));
    A17.setFill();

Rectangle A18(150,-5752.5,50,75);
A18.setColor(COLOR(0,0,204));
    A18.setFill();

Rectangle A19(350,-5752.5,50,75);
A19.setColor(COLOR(0,0,204));
    A19.setFill();



 Rectangle A20(250,-6022.5,50,75);
  A20.setColor(COLOR(0,0,204));
    A20.setFill();

  Rectangle A21(350,-6022.5,50,75);
 A21.setColor(COLOR(0,0,204));
    A21.setFill();

Rectangle A22(150,-6692.5,50,75);
A22.setColor(COLOR(0,0,204));
    A22.setFill();

Rectangle A23(250,-6692.5,50,75);
A23.setColor(COLOR(0,0,204));
    A23.setFill();

Rectangle E(250,-6900,500,10);
 E.setColor(COLOR(253,0,0));
        E.setFill();


//ended defining rectangles//
// */


int a;
while(1){

cout<<"Your move:";

cin>>a;

if(a==1){
    if(A.getX()>151){
        A=left(A);
        }

    }
else if(a==3){
    if(A.getX()<349){
          A=right(A);
          }
    }
else if(a==5){
    A=akadeundu(A);
    }

      if(sqrt((A.getY()-A1.getY())*(A.getY()-A1.getY())+(A.getX()-A1.getX())*(A.getX()-A1.getX()))<75 ||
   sqrt((A.getY()-A2.getY())*(A.getY()-A2.getY())+(A.getX()-A2.getX())*(A.getX()-A2.getX()))<75  ||
   sqrt((A.getY()-A3.getY())*(A.getY()-A3.getY())+(A.getX()-A3.getX())*(A.getX()-A3.getX()))<75 ||
   sqrt((A.getY()-A4.getY())*(A.getY()-A4.getY())+(A.getX()-A4.getX())*(A.getX()-A4.getX()))<75 ||
  sqrt((A.getY()-A5.getY())*(A.getY()-A5.getY())+(A.getX()-A5.getX())*(A.getX()-A5.getX()))<75  ||
   sqrt((A.getY()-A6.getY())*(A.getY()-A6.getY())+(A.getX()-A6.getX())*(A.getX()-A6.getX()))<75  ||
   sqrt((A.getY()-A7.getY())*(A.getY()-A7.getY())+(A.getX()-A7.getX())*(A.getX()-A7.getX()))<75  ||
   sqrt((A.getY()-A8.getY())*(A.getY()-A8.getY())+(A.getX()-A8.getX())*(A.getX()-A8.getX()))<75  ||
   sqrt((A.getY()-A9.getY())*(A.getY()-A9.getY())+(A.getX()-A9.getX())*(A.getX()-A9.getX()))<75  ||
   sqrt((A.getY()-A10.getY())*(A.getY()-A10.getY())+(A.getX()-A10.getX())*(A.getX()-A10.getX()))<75  ||
   sqrt((A.getY()-A11.getY())*(A.getY()-A11.getY())+(A.getX()-A11.getX())*(A.getX()-A11.getX()))<75  ||
   sqrt((A.getY()-A12.getY())*(A.getY()-A12.getY())+(A.getX()-A12.getX())*(A.getX()-A12.getX()))<75  ||
   sqrt((A.getY()-A13.getY())*(A.getY()-A13.getY())+(A.getX()-A13.getX())*(A.getX()-A13.getX()))<75  ||
   sqrt((A.getY()-A14.getY())*(A.getY()-A14.getY())+(A.getX()-A14.getX())*(A.getX()-A14.getX()))<75  ||
   sqrt((A.getY()-A15.getY())*(A.getY()-A15.getY())+(A.getX()-A15.getX())*(A.getX()-A15.getX()))<75  ||
   sqrt((A.getY()-A16.getY())*(A.getY()-A16.getY())+(A.getX()-A16.getX())*(A.getX()-A16.getX()))<75  ||
   sqrt((A.getY()-A17.getY())*(A.getY()-A17.getY())+(A.getX()-A17.getX())*(A.getX()-A17.getX()))<75  ||
   sqrt((A.getY()-A18.getY())*(A.getY()-A18.getY())+(A.getX()-A18.getX())*(A.getX()-A18.getX()))<75  ||
   sqrt((A.getY()-A19.getY())*(A.getY()-A19.getY())+(A.getX()-A19.getX())*(A.getX()-A19.getX()))<75  ||
   sqrt((A.getY()-A20.getY())*(A.getY()-A20.getY())+(A.getX()-A20.getX())*(A.getX()-A20.getX()))<75  ||
   sqrt((A.getY()-A21.getY())*(A.getY()-A21.getY())+(A.getX()-A21.getX())*(A.getX()-A21.getX()))<75  ||
   sqrt((A.getY()-A22.getY())*(A.getY()-A22.getY())+(A.getX()-A22.getX())*(A.getX()-A22.getX()))<75  ||
   sqrt((A.getY()-A23.getY())*(A.getY()-A23.getY())+(A.getX()-A23.getX())*(A.getX()-A23.getX()))<75  ){

    int score;
    score = A23.getY()+7000;
    Text p(250,250,"GAME OVER");
    Text q(250,300,score);
    wait(5);
    break;


}
if(A.getY()>350){
A= effect(A);}


 //moving all down

if(a==1 || a== 5 || a== 3){
A1=down(A1);
A2=down(A2);
A3=down(A3);
A4=down(A4);
A5=down(A5);
A6=down(A6);
A7=down(A7);
A8=down(A8);
A9=down(A9);
A10=down(A10);
A11=down(A11);
A12=down(A12);
A13=down(A13);
A14=down(A14);
A15=down(A15);
A16=down(A16);
A17=down(A17);
A18=down(A18);
A19=down(A19);
A20=down(A20);
A21=down(A21);
A22=down(A22);
A23=down(A23);
E=down(E);}




}
;

}
