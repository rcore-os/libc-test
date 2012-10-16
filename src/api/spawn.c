#include <spawn.h>
#define T(t) (t*)0;
#define C(n) switch(n){case n:;}
static void f()
{
T(posix_spawnattr_t)
T(posix_spawn_file_actions_t)
T(mode_t)
T(pid_t)
T(sigset_t)
T(struct sched_param)
C(POSIX_SPAWN_RESETIDS)
C(POSIX_SPAWN_SETPGROUP)
C(POSIX_SPAWN_SETSCHEDPARAM)
C(POSIX_SPAWN_SETSCHEDULER)
C(POSIX_SPAWN_SETSIGDEF)
C(POSIX_SPAWN_SETSIGMASK)
int(*p_posix_spawn)(pid_t*restrict,const char*restrict,const posix_spawn_file_actions_t*,const posix_spawnattr_t*restrict,char*const[restrict],char*const[restrict]) = posix_spawn;
int(*p_posix_spawn_file_actions_addclose)(posix_spawn_file_actions_t*,int) = posix_spawn_file_actions_addclose;
int(*p_posix_spawn_file_actions_adddup2)(posix_spawn_file_actions_t*,int,int) = posix_spawn_file_actions_adddup2;
int(*p_posix_spawn_file_actions_addopen)(posix_spawn_file_actions_t*restrict,int,const char*restrict,int,mode_t) = posix_spawn_file_actions_addopen;
int(*p_posix_spawn_file_actions_destroy)(posix_spawn_file_actions_t*) = posix_spawn_file_actions_destroy;
int(*p_posix_spawn_file_actions_init)(posix_spawn_file_actions_t*) = posix_spawn_file_actions_init;
int(*p_posix_spawnattr_destroy)(posix_spawnattr_t*) = posix_spawnattr_destroy;
int(*p_posix_spawnattr_getflags)(const posix_spawnattr_t*restrict,short*restrict) = posix_spawnattr_getflags;
int(*p_posix_spawnattr_getpgroup)(const posix_spawnattr_t*restrict,pid_t*restrict) = posix_spawnattr_getpgroup;
int(*p_posix_spawnattr_init)(posix_spawnattr_t*) = posix_spawnattr_init;
int(*p_posix_spawnattr_setflags)(posix_spawnattr_t*,short) = posix_spawnattr_setflags;
int(*p_posix_spawnattr_setpgroup)(posix_spawnattr_t*,pid_t) = posix_spawnattr_setpgroup;
int(*p_posix_spawnp)(pid_t*restrict,const char*restrict,const posix_spawn_file_actions_t*,const posix_spawnattr_t*restrict,char*const[restrict],char*const[restrict]) = posix_spawnp;
}
#include <signal.h>
static void g()
{
int(*p_posix_spawnattr_getsigdefault)(const posix_spawnattr_t*restrict,sigset_t*restrict) = posix_spawnattr_getsigdefault;
int(*p_posix_spawnattr_getsigmask)(const posix_spawnattr_t*restrict,sigset_t*restrict) = posix_spawnattr_getsigmask;
int(*p_posix_spawnattr_setsigdefault)(posix_spawnattr_t*restrict,const sigset_t*restrict) = posix_spawnattr_setsigdefault;
int(*p_posix_spawnattr_setsigmask)(posix_spawnattr_t*restrict,const sigset_t*restrict) = posix_spawnattr_setsigmask;
}
#include <sched.h>
static void h()
{
int(*p_posix_spawnattr_getschedparam)(const posix_spawnattr_t*restrict,struct sched_param*restrict) = posix_spawnattr_getschedparam;
int(*p_posix_spawnattr_getschedpolicy)(const posix_spawnattr_t*restrict,int*restrict) = posix_spawnattr_getschedpolicy;
int(*p_posix_spawnattr_setschedparam)(posix_spawnattr_t*restrict,const struct sched_param*restrict) = posix_spawnattr_setschedparam;
int(*p_posix_spawnattr_setschedpolicy)(posix_spawnattr_t*,int) = posix_spawnattr_setschedpolicy;
}
