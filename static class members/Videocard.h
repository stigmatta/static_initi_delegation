#pragma once
class Videocard
{
private:
	char* name;
	char* videomemory;
	unsigned int bandwidth;
	unsigned int price;
public:
	Videocard() {};
	Videocard(const char* name) {};
	Videocard(const char* name, const char* videomemory) :Videocard(name) {};
	Videocard(const char* name, const char* videomemory, unsigned int bandwidth) :Videocard(name, videomemory) {};
	Videocard(const char* name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity) : Videocard(name, videomemory, bandwidth) {};
	Videocard(const Videocard& v) {};
	~Videocard() {};
	char* get_name();
	char* get_videomemory();
	unsigned int get_bandwidth();
	unsigned int get_videomemory_capacity();
	void set_name(const char* name);
	void set_videomemory(const char* videomemory);
	void set_bandwidth(unsigned int bandwidth);
	void set_videomemory_capacity(unsigned int videomemory_capacity);
	void input(const char* name, const char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity);
	void print() {};


};

