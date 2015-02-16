#include "global.h"

#include <QFont>
#include <QIcon>

namespace K {
  QFont oxygen;
  bool breeze;
  int grid;
  bool showGrid = true;
  float gs = 20;
  QIcon pointerI;
  QIcon resistorI;
  TabWidget * tabWidget;
  QString home;
  namespace degrees
  {
    double sine[degreeSize] = {0, .707106, 1, .707106, 0, -.707106, -1, -.707106};
    double cosine[degreeSize] = {1, .707106, 0, -.707106, -1, -.707106, 0, .707106};

    degree angle2enum(int angle)
    {
      switch(angle)
        {
        case 0: return D0;
        case 45: return D45;
        case 90: return D90;
        case 135: return D135;
        case 180: return D180;
        case 225: return D225;
        case 270: return D270;
        case 315: return D315;
        default: return D0;
        }
    }

  }
}