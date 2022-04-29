#include <iostream>
#include <stdexcept>
#include <memory>

void validateArguments(int argc)
{
    if(argc != 2)
    {
        std::cerr << "You need to pass 1 argument" << std::endl;
        exit(-1);
    }
}

class Custom_error : public std::logic_error
{
    private:
        const char *message;
    public:
        Custom_error(const char *message) : std::logic_error(message)
        {
            this->message = message;
        }
};

class Resource
{
private:
    const char *arg;
public:
    void use(const char* arg)
    {
        std::cout << "Using resource. Passed " << *arg << std::endl;
        if (*arg == 'd')
        {
            throw Custom_error("Passed d. d is prohibited.");
        }
    }

    ~Resource()
    {
        delete arg;
    }
};

int main(int argc, char* argv[])
{
    validateArguments(argc);

    const char* argument = argv[1];


    try
    {
        std::unique_ptr<Resource> rsc = std::make_unique<Resource>();
        rsc->use(argument);
    }
    catch (Custom_error& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}

