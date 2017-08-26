#ifndef locksingleton_H
#define locksingleton_H
class locksingleton
{
	public:
		locksingleton();
		~locksingleton();
		static locksingleton* getInstance();

	private:
		static locksingleton* instance;	
};
#endif