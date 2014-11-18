#include <MeggyJrSimple.h>    

void setup()                    
{
  MeggyJrSimpleSetup();     
}

int x = 4;
int y = 4;

void DrawDot()
{
 ClearSlate();
 DrawPx(x,y,15);
 DisplaySlate();
 
 delay(1);
}

void loop()                     
{
  
  CheckButtonsPress();
  if (Button_Up)
    if (y < 7)
      {
        y++;
        Tone_Start(ToneG7, 10);
      }
    
  if (Button_Down)
    if (y > 0)
      {
        y--;
        Tone_Start(ToneG7, 10);
      }
  if (Button_Left)
    if (x > 0)
      {
        x--;
        Tone_Start(ToneG7, 10);
      }
  if (Button_Right)
    if (x < 7)
      {
        x++;
        Tone_Start(ToneG7, 10);
      }
    DrawDot();
}


