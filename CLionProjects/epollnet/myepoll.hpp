#ifndef EPOLLNET_MYEPOLL_HPP
#define EPOLLNET_MYEPOLL_HPP

#include <sys/socket.h>
#include <sys/epoll.h>

namespace _XJ_{

    class MyEpoll{
    protected:
        int m_fd;

    public:
        MyEpoll();

        Init();
        Control(int type, int fd);
        Release();

    };
}

#endif
