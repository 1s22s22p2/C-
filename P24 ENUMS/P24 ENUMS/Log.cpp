#include <iostream>

class Log
{
public:                               
	enum Level
	{
		LevelError=0,LevelWarning=1, LevelInfo=2       //to make our code readable��  //ǰ���level��Ϊ�˷�ֹ�����ظ�
	};
	//const int LogLevelWarning = 1;
	//const int LogLevelError = 0;
	//const int LogLevelInfo = 2;       //suitable for enum
private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Warn(const char* message)             
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[Warning]:" << message << std::endl;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[Error]:" << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[Info]:" << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelWarning);   //Ҳ������log.LevelWarning
	log.Warn("hello");
	log.Error("hello");
	log.Info("hello");
	std::cin.get();
}

//���κ��õ����ּ��ϵĵط�������ѡ��enum