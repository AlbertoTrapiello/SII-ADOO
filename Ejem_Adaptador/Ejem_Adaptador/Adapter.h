#pragma once

class LibraryOne
{

};

class LibraryTwo
{

};

class IAdapter
{
public:
	virtual void Do() = 0;
};

class AdapterOne : public IAdapter
{
	LibraryOne server;
public:
	AdapterOne() {}
	void Do()
	{
		server.ThisIsHowOneDoesIt();
	}

};

class AdapterTwo : public IAdapter
{
	LibraryTwo server;
public:
	AdapterTwo() {}
	void Do()
	{
		std::cout << server.ThisIsHowTwoDoesIt() << endl;
	}
};