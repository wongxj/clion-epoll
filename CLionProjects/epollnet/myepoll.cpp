#include "myepoll.hpp"

namespace _XJ_
{
    MyEpoll::MyEpoll()
    {
        m_fd = 0;
    }

    MyEpoll::Init()
    {
        create_epoll(1);

        struct sockaddr_in clientaddr;
        struct sockaddr_in serveraddr;
        listenfd = socket(AF_INET, SOCK_STREAM, 0);
    }

    MyEpoll::Control(int type, int fd)
    {

    }

    MyEpoll::Release()
    {
        if(m_fd)
        {
            close(m_fd);
        }
    }
}
