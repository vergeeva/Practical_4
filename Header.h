#pragma once
#pragma once

using namespace System;


//Вариант 2
//Разработать минимальную функциональность класса «Линейный однонаправленный список
//с заглавным звеном».Обязательный метод – очистка списка.
//Данными списка являются пары «Строка, строка», например, «Александр» – «Саша, Сашенька, Шура, Шурик».
//Прикладные задачи
//Разработать процедуры решения задач :
// найти пару по значению первого поля;
// по значению первого поля найти пару, и изменить значение второго поля;
// найти пару по значению любого имени из второго поля;
// сформировать список из всех имен, начинающихся на указанную букву, например, все
//имена на букву «А»

ref class New_Node
{
public:
	String^ name; //Имя
	String^ var_name; //Вариации имени
	New_Node^ next;
public:
	New_Node(void) { name = ""; var_name = ""; next = nullptr; }
	New_Node(String^ N, String^ D) { name = N; var_name = D; next = nullptr; }
	New_Node(New_Node^ T) { this->name = T->name; this->var_name = T->var_name; next = nullptr;}
	virtual String^ ToString() override { return String::Format("{0} - {1};", name, var_name); }

	New_Node^ operator =(New_Node^ Right)
	{
		this->name = Right->name;
		this->var_name = Right->var_name;
		return this;
	}
	bool operator ==(New_Node^ Right);
};



ref class List_D
{
	New_Node^ head;
public:

	List_D(void)
	{
		head = gcnew New_Node;
		head->next = nullptr;
	}


	List_D^ List_D::New_List(String^ Nickname)
	{
		List_D^ New_List = gcnew List_D();
		New_Node^ S;
		for (S = head; S != nullptr; S = S->next)
		{
			if (S->name != "" && S->name[0] == Nickname[0])
			{
				New_Node^ New = gcnew New_Node(S->name, S->var_name);
				New_List->Add(New);
				this->head;
			}

		}
		if (New_List->head != nullptr)
			return New_List;
		else
			return nullptr;
	}


	New_Node^ List_D::Find(New_Node^ T) {
		New_Node^ el = gcnew New_Node();
		for (el = head; el != nullptr; el = el->next)
			if (el == T)
				return el;
		return nullptr;
	}

	New_Node^ List_D::Find(String^ T) {
		New_Node^ el = gcnew New_Node();
		for (el = head; el != nullptr; el = el->next)
			if (el->name == T)
				return el;
		return nullptr;
	}

	New_Node^ List_D::Find(int T) {
		int counter = 0;
		New_Node^ el = gcnew New_Node();
		for (el = head; el != nullptr; el = el->next)
		{
			if (counter == T)
				return el;
			else counter++;
		}
		return nullptr;
	}

	New_Node^ List_D::Find_VN(String^ T) {
		New_Node^ el = gcnew New_Node();
		for (el = head; el != nullptr; el = el->next)
			if (el->var_name == T)
				return el;
		return nullptr;
	}

	void List_D::Add(New_Node^ AddedNode)
	{
			New_Node^ old_el;
			old_el = head;                // Запоминает голову.
			head = AddedNode;                // Делает новый головным.
			AddedNode->next = old_el;        // Перебрасывает указатель на предыдущий.
	}


	void Change_New(String^ W, String^ New_VarName)
	{
		New_Node^ What = gcnew New_Node(Find(W));
		New_Node^ el = gcnew New_Node();
		for (el = head; el != nullptr; el = el->next)
		{
			if (el == What)
			{
				el->var_name = New_VarName;
			}
		}
	}


	bool List_D::Find_and_Del(New_Node^ what) {
		New_Node^ S = Find(what);
		New_Node^ el;
		if (S != nullptr)
		{
			if (what == head) {
				head = head->next;
				return true;
			}
			else
			{
				for (el = head; el != nullptr; el = el->next)
				{
					if (el->next == what) {
						el->next = el->next->next;
						return true;
					}
				}
			}
		}
		else return false;
	}

	//Отобразить
	void ViewAll(System::Windows::Forms::ListBox^ A)
	{
		New_Node^ q;
		A->Items->Clear();
		q = head;
		while (q->next != nullptr)
		{
			A->Items->Add(q->ToString());
			q = q->next;
		}
	}

	void Clear_All()
	{

		head = gcnew New_Node;
		head->next = nullptr;
	}

};

bool New_Node::operator ==(New_Node^ Right)
{
	return this->name == Right->name && this->var_name == Right->var_name;
}
