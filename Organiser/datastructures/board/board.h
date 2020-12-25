#ifndef BOARD_H
#define BOARD_H

#include <QList>
#include "boardcolumn.h"
#include "exceptions/generalexception.h"

class Board
{
	public:
		Board();

		void AddColumn(BoardColumn column);
		void EditColumnName(int index, QString title) throw(GeneralException);
		void DeleteColumn(int index) throw(GeneralException);

		int GetColumnCount();
		BoardColumn GetColumnAt(int index) throw(GeneralException);

		void AddCardToColumn(int columnIndex, Card card) throw(GeneralException);
		void ReplcaeCardInColumn(int columnIndex, int cardIndex, Card card) throw(GeneralException);
		void DeleteCardFromColumn(int columnIndex, int cardIndex) throw(GeneralException);

		void MoveCard(int columnFrom,int cardIndex,int columnTo) throw(GeneralException);
	private:
		QList<BoardColumn> columns;
};

#endif // BOARD_H
