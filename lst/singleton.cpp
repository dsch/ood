class Logger
{
private:
    static Logger* logger;
    Logger()
    {
    }

public:
    static Logger& getLogger()
    {
        if (logger == nullptr)
        {
            logger = new Logger();
        }
        return *logger;
    }

    void log(const char* message)
    {
        // write message to log file
    }
};

Logger* Logger::logger = nullptr;

int main()
{
    Logger::getLogger().log("Program started");
    return 0;
}
