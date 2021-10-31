#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class OsConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint AF_INET();
		static jint AF_INET6();
		static jint AF_NETLINK();
		static jint AF_PACKET();
		static jint AF_UNIX();
		static jint AF_UNSPEC();
		static jint AI_ADDRCONFIG();
		static jint AI_ALL();
		static jint AI_CANONNAME();
		static jint AI_NUMERICHOST();
		static jint AI_NUMERICSERV();
		static jint AI_PASSIVE();
		static jint AI_V4MAPPED();
		static jint ARPHRD_ETHER();
		static jint CAP_AUDIT_CONTROL();
		static jint CAP_AUDIT_WRITE();
		static jint CAP_BLOCK_SUSPEND();
		static jint CAP_CHOWN();
		static jint CAP_DAC_OVERRIDE();
		static jint CAP_DAC_READ_SEARCH();
		static jint CAP_FOWNER();
		static jint CAP_FSETID();
		static jint CAP_IPC_LOCK();
		static jint CAP_IPC_OWNER();
		static jint CAP_KILL();
		static jint CAP_LAST_CAP();
		static jint CAP_LEASE();
		static jint CAP_LINUX_IMMUTABLE();
		static jint CAP_MAC_ADMIN();
		static jint CAP_MAC_OVERRIDE();
		static jint CAP_MKNOD();
		static jint CAP_NET_ADMIN();
		static jint CAP_NET_BIND_SERVICE();
		static jint CAP_NET_BROADCAST();
		static jint CAP_NET_RAW();
		static jint CAP_SETFCAP();
		static jint CAP_SETGID();
		static jint CAP_SETPCAP();
		static jint CAP_SETUID();
		static jint CAP_SYSLOG();
		static jint CAP_SYS_ADMIN();
		static jint CAP_SYS_BOOT();
		static jint CAP_SYS_CHROOT();
		static jint CAP_SYS_MODULE();
		static jint CAP_SYS_NICE();
		static jint CAP_SYS_PACCT();
		static jint CAP_SYS_PTRACE();
		static jint CAP_SYS_RAWIO();
		static jint CAP_SYS_RESOURCE();
		static jint CAP_SYS_TIME();
		static jint CAP_SYS_TTY_CONFIG();
		static jint CAP_WAKE_ALARM();
		static jint _E2BIG();
		static jint _EACCES();
		static jint _EADDRINUSE();
		static jint _EADDRNOTAVAIL();
		static jint _EAFNOSUPPORT();
		static jint _EAGAIN();
		static jint EAI_AGAIN();
		static jint EAI_BADFLAGS();
		static jint EAI_FAIL();
		static jint EAI_FAMILY();
		static jint EAI_MEMORY();
		static jint EAI_NODATA();
		static jint EAI_NONAME();
		static jint EAI_OVERFLOW();
		static jint EAI_SERVICE();
		static jint EAI_SOCKTYPE();
		static jint EAI_SYSTEM();
		static jint _EALREADY();
		static jint _EBADF();
		static jint _EBADMSG();
		static jint _EBUSY();
		static jint _ECANCELED();
		static jint _ECHILD();
		static jint _ECONNABORTED();
		static jint _ECONNREFUSED();
		static jint _ECONNRESET();
		static jint _EDEADLK();
		static jint _EDESTADDRREQ();
		static jint _EDOM();
		static jint _EDQUOT();
		static jint _EEXIST();
		static jint _EFAULT();
		static jint _EFBIG();
		static jint _EHOSTUNREACH();
		static jint _EIDRM();
		static jint _EILSEQ();
		static jint _EINPROGRESS();
		static jint _EINTR();
		static jint _EINVAL();
		static jint _EIO();
		static jint _EISCONN();
		static jint _EISDIR();
		static jint _ELOOP();
		static jint _EMFILE();
		static jint _EMLINK();
		static jint _EMSGSIZE();
		static jint _EMULTIHOP();
		static jint _ENAMETOOLONG();
		static jint _ENETDOWN();
		static jint _ENETRESET();
		static jint _ENETUNREACH();
		static jint _ENFILE();
		static jint _ENOBUFS();
		static jint _ENODATA();
		static jint _ENODEV();
		static jint _ENOENT();
		static jint _ENOEXEC();
		static jint _ENOLCK();
		static jint _ENOLINK();
		static jint _ENOMEM();
		static jint _ENOMSG();
		static jint _ENOPROTOOPT();
		static jint _ENOSPC();
		static jint _ENOSR();
		static jint _ENOSTR();
		static jint _ENOSYS();
		static jint _ENOTCONN();
		static jint _ENOTDIR();
		static jint _ENOTEMPTY();
		static jint _ENOTSOCK();
		static jint _ENOTSUP();
		static jint _ENOTTY();
		static jint _ENXIO();
		static jint _EOPNOTSUPP();
		static jint _EOVERFLOW();
		static jint _EPERM();
		static jint _EPIPE();
		static jint _EPROTO();
		static jint _EPROTONOSUPPORT();
		static jint _EPROTOTYPE();
		static jint _ERANGE();
		static jint _EROFS();
		static jint _ESPIPE();
		static jint _ESRCH();
		static jint _ESTALE();
		static jint ETH_P_ALL();
		static jint ETH_P_ARP();
		static jint ETH_P_IP();
		static jint ETH_P_IPV6();
		static jint _ETIME();
		static jint _ETIMEDOUT();
		static jint _ETXTBSY();
		static jint _EXDEV();
		static jint _EXIT_FAILURE();
		static jint _EXIT_SUCCESS();
		static jint FD_CLOEXEC();
		static jint FIONREAD();
		static jint F_DUPFD();
		static jint F_DUPFD_CLOEXEC();
		static jint F_GETFD();
		static jint F_GETFL();
		static jint F_GETLK();
		static jint F_GETLK64();
		static jint F_GETOWN();
		static jint F_OK();
		static jint F_RDLCK();
		static jint F_SETFD();
		static jint F_SETFL();
		static jint F_SETLK();
		static jint F_SETLK64();
		static jint F_SETLKW();
		static jint F_SETLKW64();
		static jint F_SETOWN();
		static jint F_UNLCK();
		static jint F_WRLCK();
		static jint ICMP6_ECHO_REPLY();
		static jint ICMP6_ECHO_REQUEST();
		static jint ICMP_ECHO();
		static jint ICMP_ECHOREPLY();
		static jint IFA_F_DADFAILED();
		static jint IFA_F_DEPRECATED();
		static jint IFA_F_HOMEADDRESS();
		static jint IFA_F_NODAD();
		static jint IFA_F_OPTIMISTIC();
		static jint IFA_F_PERMANENT();
		static jint IFA_F_SECONDARY();
		static jint IFA_F_TEMPORARY();
		static jint IFA_F_TENTATIVE();
		static jint IFF_ALLMULTI();
		static jint IFF_AUTOMEDIA();
		static jint IFF_BROADCAST();
		static jint IFF_DEBUG();
		static jint IFF_DYNAMIC();
		static jint IFF_LOOPBACK();
		static jint IFF_MASTER();
		static jint IFF_MULTICAST();
		static jint IFF_NOARP();
		static jint IFF_NOTRAILERS();
		static jint IFF_POINTOPOINT();
		static jint IFF_PORTSEL();
		static jint IFF_PROMISC();
		static jint IFF_RUNNING();
		static jint IFF_SLAVE();
		static jint IFF_UP();
		static jint IPPROTO_ICMP();
		static jint IPPROTO_ICMPV6();
		static jint IPPROTO_IP();
		static jint IPPROTO_IPV6();
		static jint IPPROTO_RAW();
		static jint IPPROTO_TCP();
		static jint IPPROTO_UDP();
		static jint IPV6_CHECKSUM();
		static jint IPV6_MULTICAST_HOPS();
		static jint IPV6_MULTICAST_IF();
		static jint IPV6_MULTICAST_LOOP();
		static jint IPV6_RECVDSTOPTS();
		static jint IPV6_RECVHOPLIMIT();
		static jint IPV6_RECVHOPOPTS();
		static jint IPV6_RECVPKTINFO();
		static jint IPV6_RECVRTHDR();
		static jint IPV6_RECVTCLASS();
		static jint IPV6_TCLASS();
		static jint IPV6_UNICAST_HOPS();
		static jint IPV6_V6ONLY();
		static jint IP_MULTICAST_IF();
		static jint IP_MULTICAST_LOOP();
		static jint IP_MULTICAST_TTL();
		static jint IP_TOS();
		static jint IP_TTL();
		static jint MAP_ANONYMOUS();
		static jint MAP_FIXED();
		static jint MAP_PRIVATE();
		static jint MAP_SHARED();
		static jint MCAST_BLOCK_SOURCE();
		static jint MCAST_JOIN_GROUP();
		static jint MCAST_JOIN_SOURCE_GROUP();
		static jint MCAST_LEAVE_GROUP();
		static jint MCAST_LEAVE_SOURCE_GROUP();
		static jint MCAST_UNBLOCK_SOURCE();
		static jint MCL_CURRENT();
		static jint MCL_FUTURE();
		static jint MFD_CLOEXEC();
		static jint MSG_CTRUNC();
		static jint MSG_DONTROUTE();
		static jint MSG_EOR();
		static jint MSG_OOB();
		static jint MSG_PEEK();
		static jint MSG_TRUNC();
		static jint MSG_WAITALL();
		static jint MS_ASYNC();
		static jint MS_INVALIDATE();
		static jint MS_SYNC();
		static jint NETLINK_INET_DIAG();
		static jint NETLINK_NETFILTER();
		static jint NETLINK_ROUTE();
		static jint NI_DGRAM();
		static jint NI_NAMEREQD();
		static jint NI_NOFQDN();
		static jint NI_NUMERICHOST();
		static jint NI_NUMERICSERV();
		static jint O_ACCMODE();
		static jint O_APPEND();
		static jint O_CLOEXEC();
		static jint O_CREAT();
		static jint O_DSYNC();
		static jint O_EXCL();
		static jint O_NOCTTY();
		static jint O_NOFOLLOW();
		static jint O_NONBLOCK();
		static jint O_RDONLY();
		static jint O_RDWR();
		static jint O_SYNC();
		static jint O_TRUNC();
		static jint O_WRONLY();
		static jint POLLERR();
		static jint POLLHUP();
		static jint POLLIN();
		static jint POLLNVAL();
		static jint POLLOUT();
		static jint POLLPRI();
		static jint POLLRDBAND();
		static jint POLLRDNORM();
		static jint POLLWRBAND();
		static jint POLLWRNORM();
		static jint PROT_EXEC();
		static jint PROT_NONE();
		static jint PROT_READ();
		static jint PROT_WRITE();
		static jint PR_GET_DUMPABLE();
		static jint PR_SET_DUMPABLE();
		static jint PR_SET_NO_NEW_PRIVS();
		static jint RTMGRP_NEIGH();
		static jint RT_SCOPE_HOST();
		static jint RT_SCOPE_LINK();
		static jint RT_SCOPE_NOWHERE();
		static jint RT_SCOPE_SITE();
		static jint RT_SCOPE_UNIVERSE();
		static jint R_OK();
		static jint _SEEK_CUR();
		static jint _SEEK_END();
		static jint _SEEK_SET();
		static jint SHUT_RD();
		static jint SHUT_RDWR();
		static jint SHUT_WR();
		static jint _SIGABRT();
		static jint _SIGALRM();
		static jint _SIGBUS();
		static jint _SIGCHLD();
		static jint _SIGCONT();
		static jint _SIGFPE();
		static jint _SIGHUP();
		static jint _SIGILL();
		static jint _SIGINT();
		static jint _SIGIO();
		static jint _SIGKILL();
		static jint _SIGPIPE();
		static jint _SIGPROF();
		static jint _SIGPWR();
		static jint _SIGQUIT();
		static jint _SIGRTMAX();
		static jint _SIGRTMIN();
		static jint _SIGSEGV();
		static jint _SIGSTKFLT();
		static jint _SIGSTOP();
		static jint _SIGSYS();
		static jint _SIGTERM();
		static jint _SIGTRAP();
		static jint _SIGTSTP();
		static jint _SIGTTIN();
		static jint _SIGTTOU();
		static jint _SIGURG();
		static jint _SIGUSR1();
		static jint _SIGUSR2();
		static jint _SIGVTALRM();
		static jint _SIGWINCH();
		static jint _SIGXCPU();
		static jint _SIGXFSZ();
		static jint SIOCGIFADDR();
		static jint SIOCGIFBRDADDR();
		static jint SIOCGIFDSTADDR();
		static jint SIOCGIFNETMASK();
		static jint SOCK_CLOEXEC();
		static jint SOCK_DGRAM();
		static jint SOCK_NONBLOCK();
		static jint SOCK_RAW();
		static jint SOCK_SEQPACKET();
		static jint SOCK_STREAM();
		static jint SOL_SOCKET();
		static jint SO_BINDTODEVICE();
		static jint SO_BROADCAST();
		static jint SO_DEBUG();
		static jint SO_DONTROUTE();
		static jint SO_ERROR();
		static jint SO_KEEPALIVE();
		static jint SO_LINGER();
		static jint SO_OOBINLINE();
		static jint SO_PASSCRED();
		static jint SO_PEERCRED();
		static jint SO_RCVBUF();
		static jint SO_RCVLOWAT();
		static jint SO_RCVTIMEO();
		static jint SO_REUSEADDR();
		static jint SO_SNDBUF();
		static jint SO_SNDLOWAT();
		static jint SO_SNDTIMEO();
		static jint SO_TYPE();
		static jint STDERR_FILENO();
		static jint STDIN_FILENO();
		static jint STDOUT_FILENO();
		static jint ST_MANDLOCK();
		static jint ST_NOATIME();
		static jint ST_NODEV();
		static jint ST_NODIRATIME();
		static jint ST_NOEXEC();
		static jint ST_NOSUID();
		static jint ST_RDONLY();
		static jint ST_RELATIME();
		static jint ST_SYNCHRONOUS();
		static jint S_IFBLK();
		static jint S_IFCHR();
		static jint S_IFDIR();
		static jint S_IFIFO();
		static jint S_IFLNK();
		static jint S_IFMT();
		static jint S_IFREG();
		static jint S_IFSOCK();
		static jint S_IRGRP();
		static jint S_IROTH();
		static jint S_IRUSR();
		static jint S_IRWXG();
		static jint S_IRWXO();
		static jint S_IRWXU();
		static jint S_ISGID();
		static jint S_ISUID();
		static jint S_ISVTX();
		static jint S_IWGRP();
		static jint S_IWOTH();
		static jint S_IWUSR();
		static jint S_IXGRP();
		static jint S_IXOTH();
		static jint S_IXUSR();
		static jint TCP_NODELAY();
		static jint TCP_USER_TIMEOUT();
		static jint _WCONTINUED();
		static jint _WEXITED();
		static jint _WNOHANG();
		static jint _WNOWAIT();
		static jint _WSTOPPED();
		static jint _WUNTRACED();
		static jint W_OK();
		static jint X_OK();
		static jint _SC_2_CHAR_TERM();
		static jint _SC_2_C_BIND();
		static jint _SC_2_C_DEV();
		static jint _SC_2_C_VERSION();
		static jint _SC_2_FORT_DEV();
		static jint _SC_2_FORT_RUN();
		static jint _SC_2_LOCALEDEF();
		static jint _SC_2_SW_DEV();
		static jint _SC_2_UPE();
		static jint _SC_2_VERSION();
		static jint _SC_AIO_LISTIO_MAX();
		static jint _SC_AIO_MAX();
		static jint _SC_AIO_PRIO_DELTA_MAX();
		static jint _SC_ARG_MAX();
		static jint _SC_ASYNCHRONOUS_IO();
		static jint _SC_ATEXIT_MAX();
		static jint _SC_AVPHYS_PAGES();
		static jint _SC_BC_BASE_MAX();
		static jint _SC_BC_DIM_MAX();
		static jint _SC_BC_SCALE_MAX();
		static jint _SC_BC_STRING_MAX();
		static jint _SC_CHILD_MAX();
		static jint _SC_CLK_TCK();
		static jint _SC_COLL_WEIGHTS_MAX();
		static jint _SC_DELAYTIMER_MAX();
		static jint _SC_EXPR_NEST_MAX();
		static jint _SC_FSYNC();
		static jint _SC_GETGR_R_SIZE_MAX();
		static jint _SC_GETPW_R_SIZE_MAX();
		static jint _SC_IOV_MAX();
		static jint _SC_JOB_CONTROL();
		static jint _SC_LINE_MAX();
		static jint _SC_LOGIN_NAME_MAX();
		static jint _SC_MAPPED_FILES();
		static jint _SC_MEMLOCK();
		static jint _SC_MEMLOCK_RANGE();
		static jint _SC_MEMORY_PROTECTION();
		static jint _SC_MESSAGE_PASSING();
		static jint _SC_MQ_OPEN_MAX();
		static jint _SC_MQ_PRIO_MAX();
		static jint _SC_NGROUPS_MAX();
		static jint _SC_NPROCESSORS_CONF();
		static jint _SC_NPROCESSORS_ONLN();
		static jint _SC_OPEN_MAX();
		static jint _SC_PAGESIZE();
		static jint _SC_PAGE_SIZE();
		static jint _SC_PASS_MAX();
		static jint _SC_PHYS_PAGES();
		static jint _SC_PRIORITIZED_IO();
		static jint _SC_PRIORITY_SCHEDULING();
		static jint _SC_REALTIME_SIGNALS();
		static jint _SC_RE_DUP_MAX();
		static jint _SC_RTSIG_MAX();
		static jint _SC_SAVED_IDS();
		static jint _SC_SEMAPHORES();
		static jint _SC_SEM_NSEMS_MAX();
		static jint _SC_SEM_VALUE_MAX();
		static jint _SC_SHARED_MEMORY_OBJECTS();
		static jint _SC_SIGQUEUE_MAX();
		static jint _SC_STREAM_MAX();
		static jint _SC_SYNCHRONIZED_IO();
		static jint _SC_THREADS();
		static jint _SC_THREAD_ATTR_STACKADDR();
		static jint _SC_THREAD_ATTR_STACKSIZE();
		static jint _SC_THREAD_DESTRUCTOR_ITERATIONS();
		static jint _SC_THREAD_KEYS_MAX();
		static jint _SC_THREAD_PRIORITY_SCHEDULING();
		static jint _SC_THREAD_PRIO_INHERIT();
		static jint _SC_THREAD_PRIO_PROTECT();
		static jint _SC_THREAD_SAFE_FUNCTIONS();
		static jint _SC_THREAD_STACK_MIN();
		static jint _SC_THREAD_THREADS_MAX();
		static jint _SC_TIMERS();
		static jint _SC_TIMER_MAX();
		static jint _SC_TTY_NAME_MAX();
		static jint _SC_TZNAME_MAX();
		static jint _SC_VERSION();
		static jint _SC_XBS5_ILP32_OFF32();
		static jint _SC_XBS5_ILP32_OFFBIG();
		static jint _SC_XBS5_LP64_OFF64();
		static jint _SC_XBS5_LPBIG_OFFBIG();
		static jint _SC_XOPEN_CRYPT();
		static jint _SC_XOPEN_ENH_I18N();
		static jint _SC_XOPEN_LEGACY();
		static jint _SC_XOPEN_REALTIME();
		static jint _SC_XOPEN_REALTIME_THREADS();
		static jint _SC_XOPEN_SHM();
		static jint _SC_XOPEN_UNIX();
		static jint _SC_XOPEN_VERSION();
		static jint _SC_XOPEN_XCU_VERSION();
		
		// QJniObject forward
		template<typename ...Ts> explicit OsConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OsConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean S_ISBLK(jint arg0);
		static jboolean S_ISCHR(jint arg0);
		static jboolean S_ISDIR(jint arg0);
		static jboolean S_ISFIFO(jint arg0);
		static jboolean S_ISLNK(jint arg0);
		static jboolean S_ISREG(jint arg0);
		static jboolean S_ISSOCK(jint arg0);
		static jboolean _WCOREDUMP(jint arg0);
		static jint _WEXITSTATUS(jint arg0);
		static jboolean _WIFEXITED(jint arg0);
		static jboolean _WIFSIGNALED(jint arg0);
		static jboolean _WIFSTOPPED(jint arg0);
		static jint _WSTOPSIG(jint arg0);
		static jint _WTERMSIG(jint arg0);
		static jstring errnoName(jint arg0);
		static jstring gaiName(jint arg0);
	};
} // namespace android::system

