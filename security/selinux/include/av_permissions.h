/* This file is automatically generated.  Do not edit. */
/* FLASK */

#define COMMON_FILE__IOCTL                               0x00000001UL
#define COMMON_FILE__READ                                0x00000002UL
#define COMMON_FILE__WRITE                               0x00000004UL
#define COMMON_FILE__CREATE                              0x00000008UL
#define COMMON_FILE__GETATTR                             0x00000010UL
#define COMMON_FILE__SETATTR                             0x00000020UL
#define COMMON_FILE__LOCK                                0x00000040UL
#define COMMON_FILE__RELABELFROM                         0x00000080UL
#define COMMON_FILE__RELABELTO                           0x00000100UL
#define COMMON_FILE__APPEND                              0x00000200UL
#define COMMON_FILE__UNLINK                              0x00000400UL
#define COMMON_FILE__LINK                                0x00000800UL
#define COMMON_FILE__RENAME                              0x00001000UL
#define COMMON_FILE__EXECUTE                             0x00002000UL
#define COMMON_FILE__SWAPON                              0x00004000UL
#define COMMON_FILE__QUOTAON                             0x00008000UL
#define COMMON_FILE__MOUNTON                             0x00010000UL

#define COMMON_SOCKET__IOCTL                             0x00000001UL
#define COMMON_SOCKET__READ                              0x00000002UL
#define COMMON_SOCKET__WRITE                             0x00000004UL
#define COMMON_SOCKET__CREATE                            0x00000008UL
#define COMMON_SOCKET__GETATTR                           0x00000010UL
#define COMMON_SOCKET__SETATTR                           0x00000020UL
#define COMMON_SOCKET__LOCK                              0x00000040UL
#define COMMON_SOCKET__RELABELFROM                       0x00000080UL
#define COMMON_SOCKET__RELABELTO                         0x00000100UL
#define COMMON_SOCKET__APPEND                            0x00000200UL
#define COMMON_SOCKET__BIND                              0x00000400UL
#define COMMON_SOCKET__CONNECT                           0x00000800UL
#define COMMON_SOCKET__LISTEN                            0x00001000UL
#define COMMON_SOCKET__ACCEPT                            0x00002000UL
#define COMMON_SOCKET__GETOPT                            0x00004000UL
#define COMMON_SOCKET__SETOPT                            0x00008000UL
#define COMMON_SOCKET__SHUTDOWN                          0x00010000UL
#define COMMON_SOCKET__RECVFROM                          0x00020000UL
#define COMMON_SOCKET__SENDTO                            0x00040000UL
#define COMMON_SOCKET__RECV_MSG                          0x00080000UL
#define COMMON_SOCKET__SEND_MSG                          0x00100000UL
#define COMMON_SOCKET__NAME_BIND                         0x00200000UL

#define COMMON_IPC__CREATE                               0x00000001UL
#define COMMON_IPC__DESTROY                              0x00000002UL
#define COMMON_IPC__GETATTR                              0x00000004UL
#define COMMON_IPC__SETATTR                              0x00000008UL
#define COMMON_IPC__READ                                 0x00000010UL
#define COMMON_IPC__WRITE                                0x00000020UL
#define COMMON_IPC__ASSOCIATE                            0x00000040UL
#define COMMON_IPC__UNIX_READ                            0x00000080UL
#define COMMON_IPC__UNIX_WRITE                           0x00000100UL

#define FILESYSTEM__MOUNT                         0x00000001UL
#define FILESYSTEM__REMOUNT                       0x00000002UL
#define FILESYSTEM__UNMOUNT                       0x00000004UL
#define FILESYSTEM__GETATTR                       0x00000008UL
#define FILESYSTEM__RELABELFROM                   0x00000010UL
#define FILESYSTEM__RELABELTO                     0x00000020UL
#define FILESYSTEM__TRANSITION                    0x00000040UL
#define FILESYSTEM__ASSOCIATE                     0x00000080UL
#define FILESYSTEM__QUOTAMOD                      0x00000100UL
#define FILESYSTEM__QUOTAGET                      0x00000200UL

#define DIR__EXECUTE                              0x00002000UL
#define DIR__UNLINK                               0x00000400UL
#define DIR__SETATTR                              0x00000020UL
#define DIR__QUOTAON                              0x00008000UL
#define DIR__RELABELFROM                          0x00000080UL
#define DIR__LINK                                 0x00000800UL
#define DIR__WRITE                                0x00000004UL
#define DIR__IOCTL                                0x00000001UL
#define DIR__RELABELTO                            0x00000100UL
#define DIR__READ                                 0x00000002UL
#define DIR__RENAME                               0x00001000UL
#define DIR__APPEND                               0x00000200UL
#define DIR__LOCK                                 0x00000040UL
#define DIR__SWAPON                               0x00004000UL
#define DIR__GETATTR                              0x00000010UL
#define DIR__MOUNTON                              0x00010000UL
#define DIR__CREATE                               0x00000008UL

#define DIR__ADD_NAME                             0x00020000UL
#define DIR__REMOVE_NAME                          0x00040000UL
#define DIR__REPARENT                             0x00080000UL
#define DIR__SEARCH                               0x00100000UL
#define DIR__RMDIR                                0x00200000UL

#define FILE__EXECUTE                             0x00002000UL
#define FILE__UNLINK                              0x00000400UL
#define FILE__SETATTR                             0x00000020UL
#define FILE__QUOTAON                             0x00008000UL
#define FILE__RELABELFROM                         0x00000080UL
#define FILE__LINK                                0x00000800UL
#define FILE__WRITE                               0x00000004UL
#define FILE__IOCTL                               0x00000001UL
#define FILE__RELABELTO                           0x00000100UL
#define FILE__READ                                0x00000002UL
#define FILE__RENAME                              0x00001000UL
#define FILE__APPEND                              0x00000200UL
#define FILE__LOCK                                0x00000040UL
#define FILE__SWAPON                              0x00004000UL
#define FILE__GETATTR                             0x00000010UL
#define FILE__MOUNTON                             0x00010000UL
#define FILE__CREATE                              0x00000008UL

#define FILE__EXECUTE_NO_TRANS                    0x00020000UL
#define FILE__ENTRYPOINT                          0x00040000UL

#define LNK_FILE__EXECUTE                         0x00002000UL
#define LNK_FILE__UNLINK                          0x00000400UL
#define LNK_FILE__SETATTR                         0x00000020UL
#define LNK_FILE__QUOTAON                         0x00008000UL
#define LNK_FILE__RELABELFROM                     0x00000080UL
#define LNK_FILE__LINK                            0x00000800UL
#define LNK_FILE__WRITE                           0x00000004UL
#define LNK_FILE__IOCTL                           0x00000001UL
#define LNK_FILE__RELABELTO                       0x00000100UL
#define LNK_FILE__READ                            0x00000002UL
#define LNK_FILE__RENAME                          0x00001000UL
#define LNK_FILE__APPEND                          0x00000200UL
#define LNK_FILE__LOCK                            0x00000040UL
#define LNK_FILE__SWAPON                          0x00004000UL
#define LNK_FILE__GETATTR                         0x00000010UL
#define LNK_FILE__MOUNTON                         0x00010000UL
#define LNK_FILE__CREATE                          0x00000008UL

#define CHR_FILE__EXECUTE                         0x00002000UL
#define CHR_FILE__UNLINK                          0x00000400UL
#define CHR_FILE__SETATTR                         0x00000020UL
#define CHR_FILE__QUOTAON                         0x00008000UL
#define CHR_FILE__RELABELFROM                     0x00000080UL
#define CHR_FILE__LINK                            0x00000800UL
#define CHR_FILE__WRITE                           0x00000004UL
#define CHR_FILE__IOCTL                           0x00000001UL
#define CHR_FILE__RELABELTO                       0x00000100UL
#define CHR_FILE__READ                            0x00000002UL
#define CHR_FILE__RENAME                          0x00001000UL
#define CHR_FILE__APPEND                          0x00000200UL
#define CHR_FILE__LOCK                            0x00000040UL
#define CHR_FILE__SWAPON                          0x00004000UL
#define CHR_FILE__GETATTR                         0x00000010UL
#define CHR_FILE__MOUNTON                         0x00010000UL
#define CHR_FILE__CREATE                          0x00000008UL

#define BLK_FILE__EXECUTE                         0x00002000UL
#define BLK_FILE__UNLINK                          0x00000400UL
#define BLK_FILE__SETATTR                         0x00000020UL
#define BLK_FILE__QUOTAON                         0x00008000UL
#define BLK_FILE__RELABELFROM                     0x00000080UL
#define BLK_FILE__LINK                            0x00000800UL
#define BLK_FILE__WRITE                           0x00000004UL
#define BLK_FILE__IOCTL                           0x00000001UL
#define BLK_FILE__RELABELTO                       0x00000100UL
#define BLK_FILE__READ                            0x00000002UL
#define BLK_FILE__RENAME                          0x00001000UL
#define BLK_FILE__APPEND                          0x00000200UL
#define BLK_FILE__LOCK                            0x00000040UL
#define BLK_FILE__SWAPON                          0x00004000UL
#define BLK_FILE__GETATTR                         0x00000010UL
#define BLK_FILE__MOUNTON                         0x00010000UL
#define BLK_FILE__CREATE                          0x00000008UL

#define SOCK_FILE__EXECUTE                        0x00002000UL
#define SOCK_FILE__UNLINK                         0x00000400UL
#define SOCK_FILE__SETATTR                        0x00000020UL
#define SOCK_FILE__QUOTAON                        0x00008000UL
#define SOCK_FILE__RELABELFROM                    0x00000080UL
#define SOCK_FILE__LINK                           0x00000800UL
#define SOCK_FILE__WRITE                          0x00000004UL
#define SOCK_FILE__IOCTL                          0x00000001UL
#define SOCK_FILE__RELABELTO                      0x00000100UL
#define SOCK_FILE__READ                           0x00000002UL
#define SOCK_FILE__RENAME                         0x00001000UL
#define SOCK_FILE__APPEND                         0x00000200UL
#define SOCK_FILE__LOCK                           0x00000040UL
#define SOCK_FILE__SWAPON                         0x00004000UL
#define SOCK_FILE__GETATTR                        0x00000010UL
#define SOCK_FILE__MOUNTON                        0x00010000UL
#define SOCK_FILE__CREATE                         0x00000008UL

#define FIFO_FILE__EXECUTE                        0x00002000UL
#define FIFO_FILE__UNLINK                         0x00000400UL
#define FIFO_FILE__SETATTR                        0x00000020UL
#define FIFO_FILE__QUOTAON                        0x00008000UL
#define FIFO_FILE__RELABELFROM                    0x00000080UL
#define FIFO_FILE__LINK                           0x00000800UL
#define FIFO_FILE__WRITE                          0x00000004UL
#define FIFO_FILE__IOCTL                          0x00000001UL
#define FIFO_FILE__RELABELTO                      0x00000100UL
#define FIFO_FILE__READ                           0x00000002UL
#define FIFO_FILE__RENAME                         0x00001000UL
#define FIFO_FILE__APPEND                         0x00000200UL
#define FIFO_FILE__LOCK                           0x00000040UL
#define FIFO_FILE__SWAPON                         0x00004000UL
#define FIFO_FILE__GETATTR                        0x00000010UL
#define FIFO_FILE__MOUNTON                        0x00010000UL
#define FIFO_FILE__CREATE                         0x00000008UL

#define FD__USE                                   0x00000001UL

#define SOCKET__RELABELTO                         0x00000100UL
#define SOCKET__RECV_MSG                          0x00080000UL
#define SOCKET__RELABELFROM                       0x00000080UL
#define SOCKET__SETOPT                            0x00008000UL
#define SOCKET__APPEND                            0x00000200UL
#define SOCKET__SETATTR                           0x00000020UL
#define SOCKET__SENDTO                            0x00040000UL
#define SOCKET__GETOPT                            0x00004000UL
#define SOCKET__READ                              0x00000002UL
#define SOCKET__SHUTDOWN                          0x00010000UL
#define SOCKET__LISTEN                            0x00001000UL
#define SOCKET__BIND                              0x00000400UL
#define SOCKET__WRITE                             0x00000004UL
#define SOCKET__ACCEPT                            0x00002000UL
#define SOCKET__CONNECT                           0x00000800UL
#define SOCKET__LOCK                              0x00000040UL
#define SOCKET__IOCTL                             0x00000001UL
#define SOCKET__CREATE                            0x00000008UL
#define SOCKET__NAME_BIND                         0x00200000UL
#define SOCKET__SEND_MSG                          0x00100000UL
#define SOCKET__RECVFROM                          0x00020000UL
#define SOCKET__GETATTR                           0x00000010UL

#define TCP_SOCKET__RELABELTO                     0x00000100UL
#define TCP_SOCKET__RECV_MSG                      0x00080000UL
#define TCP_SOCKET__RELABELFROM                   0x00000080UL
#define TCP_SOCKET__SETOPT                        0x00008000UL
#define TCP_SOCKET__APPEND                        0x00000200UL
#define TCP_SOCKET__SETATTR                       0x00000020UL
#define TCP_SOCKET__SENDTO                        0x00040000UL
#define TCP_SOCKET__GETOPT                        0x00004000UL
#define TCP_SOCKET__READ                          0x00000002UL
#define TCP_SOCKET__SHUTDOWN                      0x00010000UL
#define TCP_SOCKET__LISTEN                        0x00001000UL
#define TCP_SOCKET__BIND                          0x00000400UL
#define TCP_SOCKET__WRITE                         0x00000004UL
#define TCP_SOCKET__ACCEPT                        0x00002000UL
#define TCP_SOCKET__CONNECT                       0x00000800UL
#define TCP_SOCKET__LOCK                          0x00000040UL
#define TCP_SOCKET__IOCTL                         0x00000001UL
#define TCP_SOCKET__CREATE                        0x00000008UL
#define TCP_SOCKET__NAME_BIND                     0x00200000UL
#define TCP_SOCKET__SEND_MSG                      0x00100000UL
#define TCP_SOCKET__RECVFROM                      0x00020000UL
#define TCP_SOCKET__GETATTR                       0x00000010UL

#define TCP_SOCKET__CONNECTTO                     0x00400000UL
#define TCP_SOCKET__NEWCONN                       0x00800000UL
#define TCP_SOCKET__ACCEPTFROM                    0x01000000UL
#define TCP_SOCKET__NODE_BIND                     0x02000000UL

#define UDP_SOCKET__RELABELTO                     0x00000100UL
#define UDP_SOCKET__RECV_MSG                      0x00080000UL
#define UDP_SOCKET__RELABELFROM                   0x00000080UL
#define UDP_SOCKET__SETOPT                        0x00008000UL
#define UDP_SOCKET__APPEND                        0x00000200UL
#define UDP_SOCKET__SETATTR                       0x00000020UL
#define UDP_SOCKET__SENDTO                        0x00040000UL
#define UDP_SOCKET__GETOPT                        0x00004000UL
#define UDP_SOCKET__READ                          0x00000002UL
#define UDP_SOCKET__SHUTDOWN                      0x00010000UL
#define UDP_SOCKET__LISTEN                        0x00001000UL
#define UDP_SOCKET__BIND                          0x00000400UL
#define UDP_SOCKET__WRITE                         0x00000004UL
#define UDP_SOCKET__ACCEPT                        0x00002000UL
#define UDP_SOCKET__CONNECT                       0x00000800UL
#define UDP_SOCKET__LOCK                          0x00000040UL
#define UDP_SOCKET__IOCTL                         0x00000001UL
#define UDP_SOCKET__CREATE                        0x00000008UL
#define UDP_SOCKET__NAME_BIND                     0x00200000UL
#define UDP_SOCKET__SEND_MSG                      0x00100000UL
#define UDP_SOCKET__RECVFROM                      0x00020000UL
#define UDP_SOCKET__GETATTR                       0x00000010UL
#define UDP_SOCKET__NODE_BIND                     0x00400000UL

#define RAWIP_SOCKET__RELABELTO                   0x00000100UL
#define RAWIP_SOCKET__RECV_MSG                    0x00080000UL
#define RAWIP_SOCKET__RELABELFROM                 0x00000080UL
#define RAWIP_SOCKET__SETOPT                      0x00008000UL
#define RAWIP_SOCKET__APPEND                      0x00000200UL
#define RAWIP_SOCKET__SETATTR                     0x00000020UL
#define RAWIP_SOCKET__SENDTO                      0x00040000UL
#define RAWIP_SOCKET__GETOPT                      0x00004000UL
#define RAWIP_SOCKET__READ                        0x00000002UL
#define RAWIP_SOCKET__SHUTDOWN                    0x00010000UL
#define RAWIP_SOCKET__LISTEN                      0x00001000UL
#define RAWIP_SOCKET__BIND                        0x00000400UL
#define RAWIP_SOCKET__WRITE                       0x00000004UL
#define RAWIP_SOCKET__ACCEPT                      0x00002000UL
#define RAWIP_SOCKET__CONNECT                     0x00000800UL
#define RAWIP_SOCKET__LOCK                        0x00000040UL
#define RAWIP_SOCKET__IOCTL                       0x00000001UL
#define RAWIP_SOCKET__CREATE                      0x00000008UL
#define RAWIP_SOCKET__NAME_BIND                   0x00200000UL
#define RAWIP_SOCKET__SEND_MSG                    0x00100000UL
#define RAWIP_SOCKET__RECVFROM                    0x00020000UL
#define RAWIP_SOCKET__GETATTR                     0x00000010UL
#define RAWIP_SOCKET__NODE_BIND                   0x00400000UL

#define NODE__TCP_RECV                            0x00000001UL
#define NODE__TCP_SEND                            0x00000002UL
#define NODE__UDP_RECV                            0x00000004UL
#define NODE__UDP_SEND                            0x00000008UL
#define NODE__RAWIP_RECV                          0x00000010UL
#define NODE__RAWIP_SEND                          0x00000020UL
#define NODE__ENFORCE_DEST                        0x00000040UL

#define NETIF__TCP_RECV                           0x00000001UL
#define NETIF__TCP_SEND                           0x00000002UL
#define NETIF__UDP_RECV                           0x00000004UL
#define NETIF__UDP_SEND                           0x00000008UL
#define NETIF__RAWIP_RECV                         0x00000010UL
#define NETIF__RAWIP_SEND                         0x00000020UL

#define NETLINK_SOCKET__RELABELTO                 0x00000100UL
#define NETLINK_SOCKET__RECV_MSG                  0x00080000UL
#define NETLINK_SOCKET__RELABELFROM               0x00000080UL
#define NETLINK_SOCKET__SETOPT                    0x00008000UL
#define NETLINK_SOCKET__APPEND                    0x00000200UL
#define NETLINK_SOCKET__SETATTR                   0x00000020UL
#define NETLINK_SOCKET__SENDTO                    0x00040000UL
#define NETLINK_SOCKET__GETOPT                    0x00004000UL
#define NETLINK_SOCKET__READ                      0x00000002UL
#define NETLINK_SOCKET__SHUTDOWN                  0x00010000UL
#define NETLINK_SOCKET__LISTEN                    0x00001000UL
#define NETLINK_SOCKET__BIND                      0x00000400UL
#define NETLINK_SOCKET__WRITE                     0x00000004UL
#define NETLINK_SOCKET__ACCEPT                    0x00002000UL
#define NETLINK_SOCKET__CONNECT                   0x00000800UL
#define NETLINK_SOCKET__LOCK                      0x00000040UL
#define NETLINK_SOCKET__IOCTL                     0x00000001UL
#define NETLINK_SOCKET__CREATE                    0x00000008UL
#define NETLINK_SOCKET__NAME_BIND                 0x00200000UL
#define NETLINK_SOCKET__SEND_MSG                  0x00100000UL
#define NETLINK_SOCKET__RECVFROM                  0x00020000UL
#define NETLINK_SOCKET__GETATTR                   0x00000010UL

#define PACKET_SOCKET__RELABELTO                  0x00000100UL
#define PACKET_SOCKET__RECV_MSG                   0x00080000UL
#define PACKET_SOCKET__RELABELFROM                0x00000080UL
#define PACKET_SOCKET__SETOPT                     0x00008000UL
#define PACKET_SOCKET__APPEND                     0x00000200UL
#define PACKET_SOCKET__SETATTR                    0x00000020UL
#define PACKET_SOCKET__SENDTO                     0x00040000UL
#define PACKET_SOCKET__GETOPT                     0x00004000UL
#define PACKET_SOCKET__READ                       0x00000002UL
#define PACKET_SOCKET__SHUTDOWN                   0x00010000UL
#define PACKET_SOCKET__LISTEN                     0x00001000UL
#define PACKET_SOCKET__BIND                       0x00000400UL
#define PACKET_SOCKET__WRITE                      0x00000004UL
#define PACKET_SOCKET__ACCEPT                     0x00002000UL
#define PACKET_SOCKET__CONNECT                    0x00000800UL
#define PACKET_SOCKET__LOCK                       0x00000040UL
#define PACKET_SOCKET__IOCTL                      0x00000001UL
#define PACKET_SOCKET__CREATE                     0x00000008UL
#define PACKET_SOCKET__NAME_BIND                  0x00200000UL
#define PACKET_SOCKET__SEND_MSG                   0x00100000UL
#define PACKET_SOCKET__RECVFROM                   0x00020000UL
#define PACKET_SOCKET__GETATTR                    0x00000010UL

#define KEY_SOCKET__RELABELTO                     0x00000100UL
#define KEY_SOCKET__RECV_MSG                      0x00080000UL
#define KEY_SOCKET__RELABELFROM                   0x00000080UL
#define KEY_SOCKET__SETOPT                        0x00008000UL
#define KEY_SOCKET__APPEND                        0x00000200UL
#define KEY_SOCKET__SETATTR                       0x00000020UL
#define KEY_SOCKET__SENDTO                        0x00040000UL
#define KEY_SOCKET__GETOPT                        0x00004000UL
#define KEY_SOCKET__READ                          0x00000002UL
#define KEY_SOCKET__SHUTDOWN                      0x00010000UL
#define KEY_SOCKET__LISTEN                        0x00001000UL
#define KEY_SOCKET__BIND                          0x00000400UL
#define KEY_SOCKET__WRITE                         0x00000004UL
#define KEY_SOCKET__ACCEPT                        0x00002000UL
#define KEY_SOCKET__CONNECT                       0x00000800UL
#define KEY_SOCKET__LOCK                          0x00000040UL
#define KEY_SOCKET__IOCTL                         0x00000001UL
#define KEY_SOCKET__CREATE                        0x00000008UL
#define KEY_SOCKET__NAME_BIND                     0x00200000UL
#define KEY_SOCKET__SEND_MSG                      0x00100000UL
#define KEY_SOCKET__RECVFROM                      0x00020000UL
#define KEY_SOCKET__GETATTR                       0x00000010UL

#define UNIX_STREAM_SOCKET__RELABELTO             0x00000100UL
#define UNIX_STREAM_SOCKET__RECV_MSG              0x00080000UL
#define UNIX_STREAM_SOCKET__RELABELFROM           0x00000080UL
#define UNIX_STREAM_SOCKET__SETOPT                0x00008000UL
#define UNIX_STREAM_SOCKET__APPEND                0x00000200UL
#define UNIX_STREAM_SOCKET__SETATTR               0x00000020UL
#define UNIX_STREAM_SOCKET__SENDTO                0x00040000UL
#define UNIX_STREAM_SOCKET__GETOPT                0x00004000UL
#define UNIX_STREAM_SOCKET__READ                  0x00000002UL
#define UNIX_STREAM_SOCKET__SHUTDOWN              0x00010000UL
#define UNIX_STREAM_SOCKET__LISTEN                0x00001000UL
#define UNIX_STREAM_SOCKET__BIND                  0x00000400UL
#define UNIX_STREAM_SOCKET__WRITE                 0x00000004UL
#define UNIX_STREAM_SOCKET__ACCEPT                0x00002000UL
#define UNIX_STREAM_SOCKET__CONNECT               0x00000800UL
#define UNIX_STREAM_SOCKET__LOCK                  0x00000040UL
#define UNIX_STREAM_SOCKET__IOCTL                 0x00000001UL
#define UNIX_STREAM_SOCKET__CREATE                0x00000008UL
#define UNIX_STREAM_SOCKET__NAME_BIND             0x00200000UL
#define UNIX_STREAM_SOCKET__SEND_MSG              0x00100000UL
#define UNIX_STREAM_SOCKET__RECVFROM              0x00020000UL
#define UNIX_STREAM_SOCKET__GETATTR               0x00000010UL

#define UNIX_STREAM_SOCKET__CONNECTTO             0x00400000UL
#define UNIX_STREAM_SOCKET__NEWCONN               0x00800000UL
#define UNIX_STREAM_SOCKET__ACCEPTFROM            0x01000000UL

#define UNIX_DGRAM_SOCKET__RELABELTO              0x00000100UL
#define UNIX_DGRAM_SOCKET__RECV_MSG               0x00080000UL
#define UNIX_DGRAM_SOCKET__RELABELFROM            0x00000080UL
#define UNIX_DGRAM_SOCKET__SETOPT                 0x00008000UL
#define UNIX_DGRAM_SOCKET__APPEND                 0x00000200UL
#define UNIX_DGRAM_SOCKET__SETATTR                0x00000020UL
#define UNIX_DGRAM_SOCKET__SENDTO                 0x00040000UL
#define UNIX_DGRAM_SOCKET__GETOPT                 0x00004000UL
#define UNIX_DGRAM_SOCKET__READ                   0x00000002UL
#define UNIX_DGRAM_SOCKET__SHUTDOWN               0x00010000UL
#define UNIX_DGRAM_SOCKET__LISTEN                 0x00001000UL
#define UNIX_DGRAM_SOCKET__BIND                   0x00000400UL
#define UNIX_DGRAM_SOCKET__WRITE                  0x00000004UL
#define UNIX_DGRAM_SOCKET__ACCEPT                 0x00002000UL
#define UNIX_DGRAM_SOCKET__CONNECT                0x00000800UL
#define UNIX_DGRAM_SOCKET__LOCK                   0x00000040UL
#define UNIX_DGRAM_SOCKET__IOCTL                  0x00000001UL
#define UNIX_DGRAM_SOCKET__CREATE                 0x00000008UL
#define UNIX_DGRAM_SOCKET__NAME_BIND              0x00200000UL
#define UNIX_DGRAM_SOCKET__SEND_MSG               0x00100000UL
#define UNIX_DGRAM_SOCKET__RECVFROM               0x00020000UL
#define UNIX_DGRAM_SOCKET__GETATTR                0x00000010UL

#define PROCESS__FORK                             0x00000001UL
#define PROCESS__TRANSITION                       0x00000002UL
#define PROCESS__SIGCHLD                          0x00000004UL
#define PROCESS__SIGKILL                          0x00000008UL
#define PROCESS__SIGSTOP                          0x00000010UL
#define PROCESS__SIGNULL                          0x00000020UL
#define PROCESS__SIGNAL                           0x00000040UL
#define PROCESS__PTRACE                           0x00000080UL
#define PROCESS__GETSCHED                         0x00000100UL
#define PROCESS__SETSCHED                         0x00000200UL
#define PROCESS__GETSESSION                       0x00000400UL
#define PROCESS__GETPGID                          0x00000800UL
#define PROCESS__SETPGID                          0x00001000UL
#define PROCESS__GETCAP                           0x00002000UL
#define PROCESS__SETCAP                           0x00004000UL
#define PROCESS__SHARE                            0x00008000UL
#define PROCESS__GETATTR                          0x00010000UL
#define PROCESS__SETEXEC                          0x00020000UL
#define PROCESS__SETFSCREATE                      0x00040000UL
#define PROCESS__NOATSECURE                       0x00080000UL
#define PROCESS__SIGINH                           0x00100000UL
#define PROCESS__SETRLIMIT                        0x00200000UL
#define PROCESS__RLIMITINH                        0x00400000UL

#define IPC__SETATTR                              0x00000008UL
#define IPC__READ                                 0x00000010UL
#define IPC__ASSOCIATE                            0x00000040UL
#define IPC__DESTROY                              0x00000002UL
#define IPC__UNIX_WRITE                           0x00000100UL
#define IPC__CREATE                               0x00000001UL
#define IPC__UNIX_READ                            0x00000080UL
#define IPC__GETATTR                              0x00000004UL
#define IPC__WRITE                                0x00000020UL

#define SEM__SETATTR                              0x00000008UL
#define SEM__READ                                 0x00000010UL
#define SEM__ASSOCIATE                            0x00000040UL
#define SEM__DESTROY                              0x00000002UL
#define SEM__UNIX_WRITE                           0x00000100UL
#define SEM__CREATE                               0x00000001UL
#define SEM__UNIX_READ                            0x00000080UL
#define SEM__GETATTR                              0x00000004UL
#define SEM__WRITE                                0x00000020UL

#define MSGQ__SETATTR                             0x00000008UL
#define MSGQ__READ                                0x00000010UL
#define MSGQ__ASSOCIATE                           0x00000040UL
#define MSGQ__DESTROY                             0x00000002UL
#define MSGQ__UNIX_WRITE                          0x00000100UL
#define MSGQ__CREATE                              0x00000001UL
#define MSGQ__UNIX_READ                           0x00000080UL
#define MSGQ__GETATTR                             0x00000004UL
#define MSGQ__WRITE                               0x00000020UL

#define MSGQ__ENQUEUE                             0x00000200UL

#define MSG__SEND                                 0x00000001UL
#define MSG__RECEIVE                              0x00000002UL

#define SHM__SETATTR                              0x00000008UL
#define SHM__READ                                 0x00000010UL
#define SHM__ASSOCIATE                            0x00000040UL
#define SHM__DESTROY                              0x00000002UL
#define SHM__UNIX_WRITE                           0x00000100UL
#define SHM__CREATE                               0x00000001UL
#define SHM__UNIX_READ                            0x00000080UL
#define SHM__GETATTR                              0x00000004UL
#define SHM__WRITE                                0x00000020UL

#define SHM__LOCK                                 0x00000200UL

#define SECURITY__COMPUTE_AV                      0x00000001UL
#define SECURITY__COMPUTE_CREATE                  0x00000002UL
#define SECURITY__COMPUTE_MEMBER                  0x00000004UL
#define SECURITY__CHECK_CONTEXT                   0x00000008UL
#define SECURITY__LOAD_POLICY                     0x00000010UL
#define SECURITY__COMPUTE_RELABEL                 0x00000020UL
#define SECURITY__COMPUTE_USER                    0x00000040UL
#define SECURITY__SETENFORCE                      0x00000080UL
#define SECURITY__SETBOOL                         0x00000100UL

#define SYSTEM__IPC_INFO                          0x00000001UL
#define SYSTEM__SYSLOG_READ                       0x00000002UL
#define SYSTEM__SYSLOG_MOD                        0x00000004UL
#define SYSTEM__SYSLOG_CONSOLE                    0x00000008UL

#define CAPABILITY__CHOWN                         0x00000001UL
#define CAPABILITY__DAC_OVERRIDE                  0x00000002UL
#define CAPABILITY__DAC_READ_SEARCH               0x00000004UL
#define CAPABILITY__FOWNER                        0x00000008UL
#define CAPABILITY__FSETID                        0x00000010UL
#define CAPABILITY__KILL                          0x00000020UL
#define CAPABILITY__SETGID                        0x00000040UL
#define CAPABILITY__SETUID                        0x00000080UL
#define CAPABILITY__SETPCAP                       0x00000100UL
#define CAPABILITY__LINUX_IMMUTABLE               0x00000200UL
#define CAPABILITY__NET_BIND_SERVICE              0x00000400UL
#define CAPABILITY__NET_BROADCAST                 0x00000800UL
#define CAPABILITY__NET_ADMIN                     0x00001000UL
#define CAPABILITY__NET_RAW                       0x00002000UL
#define CAPABILITY__IPC_LOCK                      0x00004000UL
#define CAPABILITY__IPC_OWNER                     0x00008000UL
#define CAPABILITY__SYS_MODULE                    0x00010000UL
#define CAPABILITY__SYS_RAWIO                     0x00020000UL
#define CAPABILITY__SYS_CHROOT                    0x00040000UL
#define CAPABILITY__SYS_PTRACE                    0x00080000UL
#define CAPABILITY__SYS_PACCT                     0x00100000UL
#define CAPABILITY__SYS_ADMIN                     0x00200000UL
#define CAPABILITY__SYS_BOOT                      0x00400000UL
#define CAPABILITY__SYS_NICE                      0x00800000UL
#define CAPABILITY__SYS_RESOURCE                  0x01000000UL
#define CAPABILITY__SYS_TIME                      0x02000000UL
#define CAPABILITY__SYS_TTY_CONFIG                0x04000000UL
#define CAPABILITY__MKNOD                         0x08000000UL
#define CAPABILITY__LEASE                         0x10000000UL

#define PASSWD__PASSWD                            0x00000001UL
#define PASSWD__CHFN                              0x00000002UL
#define PASSWD__CHSH                              0x00000004UL


/* FLASK */
