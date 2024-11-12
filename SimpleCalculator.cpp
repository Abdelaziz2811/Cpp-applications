#include <iostream>

using namespace std;

class clsCalculator {

private:
	float _Result = 0;
	float _Number;
	string _Operation;
	float _PreviosResult = 0;

	bool _IsZero(float Number) {
		if (Number == 0)
			return true;
		else
			return false;
	}

public:
	void Add(float Number) {

		_Number = Number;
		_Operation = "Adding";
		_PreviosResult = _Result;
		_Result += Number;
	}
	void Substract(float Number) {

		_Number = Number;
		_Operation = "Substracting";
		_PreviosResult = _Result;

		_Result -= Number;
	}
	void Multply(float Number) {

		_Number = Number;
		_Operation = "Multplying";
		_PreviosResult = _Result;

		_Result *= Number;
	}
	void Divide(float Number) {

		_Number = Number;
		_Operation = "Dividing";
		_PreviosResult = _Result;


		if (_IsZero(Number))
			Number++;

		_Result /= Number;
	}

	void Clear() {
		_Number = _Result;
		_Operation = "Clear";
		_PreviosResult = _Result;
		_Result = 0;
	}

	void CancelLastOperation() {
		_Operation = "Canceling last operation";
		_Number = 0;
		_Result = _PreviosResult;
	}

	void PrintResult() {

		cout << "Result After " << _Operation << " " << _Number << " is : " << _Result << endl;
	}
	
};
