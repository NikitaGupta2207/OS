#include<stdio.h>
#include <fcntl.h>          
#include <sys/stat.h>        
#include <mqueue.h>

int main(int argc, char const *argv[])
{
    struct mq_attr cdacmq_attr;
    mqd_t mqfd;
    cdacmq_attr.mq_flags=0;
    cdacmq_attr.mq_maxmsg=4;
    cdacmq_attr.mq_msgsize=128;
    cdacmq_attr.mq_curmsgs=0; 

    mqfd =  mq_open("/cdac", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR, &cdacmq_attr);
    mq_send(mqfd, "cdac\n", 5, 0);

mq_close(mqfd);
}
