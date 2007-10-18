/**
 * \file gammu-misc.h
 * \author Michal Čihař
 *
 * Miscellaneous helper functions.
 */
#ifndef __gammu_misc_h
#define __gammu_misc_h

#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <gammu-file.h>

/**
 * Reads single line from file.
 *
 * \param File File descriptor to read from.
 * \param Line Buffer where t ostore result.
 * \param count Maximal length of text which can be stored in buffer.
 *
 * \return Length of read line, -1 on error.
 */
int GetLine(FILE * File, char *Line, int count);

/**
 * Reads file over HTTP.
 *
 * \param server Server to connect.
 * \param filename File to grab on that server.
 * \param file Storage for resulting file.
 *
 * \return True on success.
 */
bool GSM_ReadHTTPFile(unsigned char *server, unsigned char *filename,
		      GSM_File * file);

/**
 * Gets Gammu library version.
 */
const char *GetGammuVersion(void);

/**
 * Gets compiler which was used to compile Gammu library.
 */
const char *GetCompiler(void);

/**
 * Gets host OS.
 */
const char *GetOS(void);

/**
 * Returns path to Gammu locales.
 */
const char *GetGammuLocalePath(void);

/**
 * Initializes locales.
 */
extern void GSM_InitLocales(const char *path);

#undef MAX
#define MAX(a,b) ((a)>(b) ? (a) : (b))
#undef MIN
#define MIN(a,b) ((a)<(b) ? (a) : (b))

#ifdef WIN32
#  ifdef __BORLANDC__
/* BCC has a proper Sleep(), which takes milliseconds */
#    define my_sleep(x) Sleep(x)
#  else
#    include <windows.h>
#    define my_sleep(x) ((x)<1000 ? Sleep(1) : Sleep((x)/1000))
#  endif
#else
#  include <unistd.h>
#  define my_sleep(x) usleep(x*1000)
#endif

/* Various hints for compilers */
#if __GNUC__ && !defined(printf)
#define PRINTF_STYLE(f, a) __attribute__ ((format(printf, f, a)))
#define SCANF_STYLE(f, a) __attribute__ ((format(scanf, f, a)))
#else
#define PRINTF_STYLE(f, a)
#define SCANF_STYLE(f, a)
#endif
#if __GNUC__
#define UNUSED __attribute__ ((unused))
#define NORETURN __attribute__ ((noreturn))
#define WARNUNUSED __attribute__ ((__warn_unused_result__))
#define INLINE inline
#else
#define UNUSED
#define NORETURN
#define WARNUNUSED
#define INLINE
#endif

/* Printf string for size_t */
#ifdef WIN32
#define SIZE_T_FORMAT "%Id"
#else
#define SIZE_T_FORMAT "%zd"
#endif

/**
 * Encodes text to hexadecimal binary representation.
 */
void EncodeHexBin(unsigned char *dest, const unsigned char *src, int len);

/**
 * Returns true if firmware version is newer.
 *
 * \param latest_version String containing version (eg. latest available).
 * \param current_version String containing version (eg. current one).
 *
 * \return True if latest_version > current_version.
 */
bool GSM_IsNewerVersion(const char *latest_version, const char *current_version);
#endif

/* Editor configuration
 * vim: noexpandtab sw=8 ts=8 sts=8 tw=72:
 */
