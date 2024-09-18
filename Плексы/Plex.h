//#pragma once
//
//#include "Base.h"
//#include "Stack.h"
//#include "PoinT.h"
//
//class Plex {
//private:
//
//	Base* start;
//
//public:
//
//	Plex() 
//	{
//		start = nullptr;
//	}
//	Plex(const Plex& tmp)
//	{
//		start = tmp.start;
//	}
//
//	Plex& operator = (const Plex& tmp)
//	{
//		start = tmp.start;
//		return*this;
//	}
//
//	~Plex() {}
//
//	Plex(const Plex& tmp)
//	{
//		Base* cur;
//		TStack<Base*> points;
//		TStack<TLine*> lines;
//		Point* dup[100];
//		int count = 0;
//		cur = tmp.start;
//		lines.push(nullptr);
//
//		while (cur != nullptr)
//		{
//			if (cur->getType() == _Point)
//			{
//				Point* copy;
//
//				for (int i = 0; i < count && copy == nullptr; i++)
//				{
//					if (dup[i]->getName() == cur->getName())
//					{
//						copy = dup[i];
//					}
//				}
//
//				if (copy == nullptr)
//				{
//					copy = new Point(*((Point*)cur));
//					dup[count++] = copy;
//				}
//
//				points.push(copy);
//				cur = lines.pop();
//				((TLine*)cur)->IncRating();
//			}
//			else
//			{
//				switch (cur->getRating())
//				{
//				case 1:
//					lines.push((TLine*)cur);
//					cur = ((TLine*)cur)->getLeft();
//					break;
//				case 2:
//					lines.push((TLine*)cur);
//					cur = ((TLine*)cur)->getRight();
//					break;
//				case 3:
//					((TLine*)cur)->IncRating();
//
//					TLine* copy = new TLine(*((TLine*)cur));
//					copy->setRight(points.pop());
//					copy->setLeft(points.peek());
//
//					points.push(copy);
//					cur = lines.pop();
//
//					if (cur != nullptr)
//					{
//						((TLine*)cur)->IncRating();
//					}
//					break;
//				}
//			}
//		}
//
//
//	Line* find(string name) 
//	{
//		// Добавляем класс из Стека.h
//
//		Stack <Line*> Ln;
//		Ln.push(NULLPTR);
//		Base* cur = Start;
//		Line* res = NULLPTR;
//
//		while (cur != NULLPTR)
//		{
//			cur = Ln.pop();
//			(*(Line)cur)->ChangeRate();
//
//			if (cur->getFigura == point)
//			{
//				if (cur->getName() == name)
//				{
//					// Прямое преобразование к типу Line
//					cur = Ln.pop();
//					(*(Line)cur)->ChangeRate();
//					res = (*Line) cur;
//				}
//				else
//				{
//					cur = Ln.pop();
//					(*(Line)cur)->ChangeRate();
//				}
//
//				if (((*Point) cur)->getX() == x) && ((*Point) cur)->getY() == y)
//				{
//					res = (*Line) cur;
//					cur = Ln.pop();
//					(*(Line)cur)->ChangeRate();
//				}
//			}
//			else
//			{
//				if (cur->GetRate() == 1)
//				{
//					Ln.push(cur);
//					Cur = ((*Line) cur)->getLeft();
//				}
//				else if (cur->GetRate() == 2)
//				{
//					Ln.push(cur);
//					cur = ((*Line) cur)->getRight();
//				}
//				else
//				{
//					cur = Ln.pop();
//
//					if (cur != NULLPTR)
//					{
//						((*Line) cur->ChangeRate();
//					}
//				}
//			}
//		}
//
//		return res;
//	}
//// Пишем метод Add
//void Add(Line* tmp) {
//	Line* left = find(tmp->GetLeft()->GetName();
//	Line * right = find(tmp->GetRight()->GetName();
//
//	if (left == 0 && right != 0) 
//	{
//		tmp->ChangeName();
//		left = right;
//		right = 0;
//	}
//
//	else if (left != 0 && right == 0) 
//	{
//
//		if ((left->GetName().find(tmp->GetLeft())->GetName()) == 0) 
//		{
//			Point* p = tmp->GetLeft();
//			delete p;
//			tmp->SetLeft(left->GetLeft());
//			left->SetLeft(tmp);
//		}
//
//		else 
//		{
//			p = tmp->GetLeft();
//			delete p;
//			tmp->setLeft(left->GetRight());
//			left->SetRight(tmp);
//		}
//	}
//
//	else if (left != 0 && right != 0) 
//	{
//
//		if ((left->GetName().find(tmp->GetLeft())->GetName()) == 0) 
//		{
//			Point* p = tmp->GetLeft();
//			delete p;
//			tmp->SetLeft(left->GetLeft());
//			left->SetLeft(tmp);
//		}
//
//		else 
//		{
//			p = tmp->GetLeft();
//			delete p;
//			tmp->setLeft(left->GetRight());
//			left->SetRight(tmp);
//		}
//	}
//
//	//.....
//}