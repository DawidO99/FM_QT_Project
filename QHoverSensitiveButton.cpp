#include "QHoverSensitiveButton.h"

QHoverSensitiveButton::QHoverSensitiveButton(QWidget* parent) : QPushButton(parent)
{
    setMouseTracking(true);
    setAttribute(Qt::WA_Hover);
}

void QHoverSensitiveButton::hoverEnter(QHoverEvent* ev)
{
    QFont font = this->font();
    font.setBold(true);
    this->setFont(font);
    repaint();
    qlabel->setText("Dzia³a");
}

void QHoverSensitiveButton::hoverLeave(QHoverEvent* ev)
{
    QFont font = this->font();
    font.setBold(false);
    this->setFont(font);
    repaint();
    qlabel->setText("Dzia³a");
}

void QHoverSensitiveButton::hoverMove(QHoverEvent* ev)
{
    QFont font = this->font();
    font.setBold(true);
    this->setFont(font);
    repaint();
    qlabel->setText("Dzia³a");
}

bool QHoverSensitiveButton::event(QEvent* event)
{
    switch (event->type())
    {
    case QEvent::HoverEnter:
        hoverEnter(static_cast<QHoverEvent*>(event));
        return true;
        break;
    case QEvent::HoverLeave:
        hoverLeave(static_cast<QHoverEvent*>(event));
        return true;
        break;
    case QEvent::HoverMove:
        hoverMove(static_cast<QHoverEvent*>(event));
        return true;
        break;
    default:
        break;
    }
    return QWidget::event(event);
}
