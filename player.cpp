#include "player.hpp"
#include <QBrush>

Player::Player () {
	setRect(0,0,50,50);
	setBrush(Qt::red);

	setFlag(QGraphicsItem::ItemIsFocusable);
	setFocus();

}
void Player::keyPressEvent (QKeyEvent* event) {
	int speed = 10;
	if (event->modifiers()==Qt::ShiftModifier)
		speed = 50;


	if (event->key()==Qt::Key_Left) moveBy(-speed,0);
	if (event->key()==Qt::Key_Right) moveBy(speed,0);
	if (event->key()==Qt::Key_Up) moveBy(0,-speed);
	if (event->key()==Qt::Key_Down) moveBy(0, speed);
	if (event->key()==Qt::Key_Shift) moveBy(0, speed);
}
