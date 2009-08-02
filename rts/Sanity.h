/* -----------------------------------------------------------------------------
 *
 * (c) The GHC Team, 1998-1999
 *
 * Prototypes for functions in Sanity.c
 *
 * ---------------------------------------------------------------------------*/

#ifndef SANITY_H
#define SANITY_H

#ifdef DEBUG

# if defined(PAR)
# define PVM_PE_MASK    0xfffc0000
# define MAX_PVM_PES    MAX_PES
# define MAX_PVM_TIDS   MAX_PES
# define MAX_SLOTS      100000
# endif

/* debugging routines */
extern void checkHeap      ( bdescr *bd );
extern void checkHeapChunk ( StgPtr start, StgPtr end );
extern void checkLargeObjects ( bdescr *bd );
extern void checkTSO       ( StgTSO* tso );
extern void checkGlobalTSOList ( rtsBool checkTSOs );
extern void checkStaticObjects ( StgClosure* static_objects );
extern void checkStackChunk    ( StgPtr sp, StgPtr stack_end );
extern StgOffset checkStackFrame ( StgPtr sp );
extern StgOffset checkClosure  ( StgClosure* p );

extern void checkMutableList   ( bdescr *bd, nat gen );
extern void checkMutableLists ( rtsBool checkTSOs );

extern void checkBQ (StgTSO *bqe, StgClosure *closure);

/* test whether an object is already on update list */
extern rtsBool isBlackhole( StgTSO* tso, StgClosure* p );

#endif /* DEBUG */
 
#endif /* SANITY_H */
