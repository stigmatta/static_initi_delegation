#pragma once
class Videocard
{
private:
	char* name;
	char* videomemory;
	unsigned int bandwidth;
	unsigned int videomemory_capacity;
public:
	Videocard() {};
	Videocard(char* name) {};
	Videocard(char* name, char* videomemory) :Videocard(name) {};
	Videocard(char* name, char* videomemory, unsigned int bandwidth) :Videocard(name, videomemory) {};
	Videocard(char* name, char* videomemory, unsigned int bandwidth, unsigned int videomemory_capacity) : Videocard(name, videomemory, bandwidth) {};
	~Videocard() {};
	char* get_name();
	char* get_videomemory();
	unsigned int get_bandwidth();
	unsigned int get_videomemory_capacity();
	void set_name(const char* name);
	void set_videomemory(char* videomemory);
	void set_bandwidth(unsigned int bandwidth);
	void set_videomemory_capacity(unsigned int videomemory_capacity);
};

