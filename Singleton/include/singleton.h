#ifndef singleton_H
#define singleton_H
class singleton{
	private:
		class singletonfactory
		{
		public:
			singletonfactory();
			~singletonfactory();
			singleton* getInstance();
		private:
			static singleton *instance;
		};

	public:
		singleton();
		~singleton();
		singleton* getInstance();
		void f(int n);
		void printt();
		int a;
	
};
#include "../src/singleton.cpp"
#endif