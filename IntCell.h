//IntCell.h

// 防止接口文件被重复读取两次
#ifndef IntCell_H;
#define IntCell_H;

class IntCell 
{
public:
	explicit IntCell (int initialValue = 0);
	int read () const;
	void write (int x);

private:
	int storedValue;

};


#endif