#ifndef CALENDAR_H
#define CALENDAR_H

#include <QList>
#include "datastructures/card/card.h"
#include "datastructures/appData/appdata.h"

class Calendar
{
	public:
		Calendar();

		QList<Card> GetCardsForDay(QDate date, AppData appData);

		QList<Card> GetCardsForWeek(QDate date, AppData appData);

};

#endif // CALENDAR_H
