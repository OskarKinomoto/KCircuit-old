#include "circuitresistor.h"

CircuitResistor::CircuitResistor(Coordinate begin, float scale, quint16 rotation) : CircuitObject(rotation)
{
  float gs = scale * grid;
  cords = Coordinate(begin.x() / gs + .5, begin.y() / gs + .5);
}

CircuitResistor::CircuitResistor(QDataStream &in) : CircuitObject(in)
{

}

CircuitResistor::~CircuitResistor()
{

}

void CircuitResistor::draw(QPainter &p, float scale)
{
  float gs = scale * grid;
  p.save();
  if(drawing) p.setPen(Qt::gray);
  p.translate(cords.x() * gs, cords.y() * gs);
  p.rotate(this->angle);
  if(angle % 90)
    {
      p.drawLine(-wspr*gs, 0, -2.5*gs, 0);
      p.drawLine(wspr*gs, 0, 2.5*gs, 0);
    }
  else
    {
      p.drawLine(-4*gs, 0, -2.5*gs, 0);
      p.drawLine(4*gs, 0, 2.5*gs, 0);
    }
  p.drawLine(-2.5*gs, -gs, 2.5*gs, -gs);
  p.drawLine(-2.5*gs, gs, 2.5*gs, gs);
  p.drawLine(-2.5*gs, gs, -2.5*gs, -gs);
  p.drawLine(2.5*gs, gs, 2.5*gs, -gs);
  p.restore();
}

bool CircuitResistor::save(QDataStream &out)
{
  //TYP
  out << quint32(K::Object::RESISTOR);
  out << cords;
  out << angle;
  return true;
}

