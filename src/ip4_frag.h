/*!\file ip4_frag.h
 */
#ifndef _w32_IP4_FRAG_H
#define _w32_IP4_FRAG_H

extern int _ip4_frag_reasm;

extern int  ip4_defragment    (const in_Header **ip, DWORD ofs, WORD flags);
extern int  ip4_free_fragment (const in_Header *ip);
extern void chk_timeout_frags (void);

#endif

