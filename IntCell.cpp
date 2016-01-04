// class IntCell {
// 		public:// public的类成员可以被任何类中的任何方法访问

// 		IntCell () {
// 			storedValue = 10;
// 		}

// 		//  所有单参数构造函数必须都是explicit的，避免后台类型转换
// 		// explicit IntCell (int initialValue) {
// 		// 	storedValue = initialValue;
// 		// }

// 		// 参数化列表
// 		explicit IntCell (int initialValue = 11): storedValue (initialValue) {
// 		}

// 		// 访问函数 只进行检测但不改变其对象状态的成员函数
// 		// error: read-only variable is not assignable
// 		int read () const {
// 			// storedValue = 20;
// 			return storedValue;
// 		}

// 		//  改变其对象状态的成员函数称为修改函数
// 		void write (int newValue) {
// 			storedValue = newValue;
// 		}


// 		private://private的类成员仅可以被它所在嘞的方法访问
// 			int storedValue;

// // c++ 类最后得放一个分号
// };

#include "IntCell.h"

	IntCell::IntCell (int initialValue): storedValue (initialValue) {
	}

	int IntCell::read () const {
		return storedValue;
	}

	void IntCell::write (int x) {
		storedValue = x;
	}