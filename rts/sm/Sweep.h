/* -----------------------------------------------------------------------------
 *
 * (c) The GHC Team 2008
 *
 * Simple mark/sweep, collecting whole blocks.
 *
 * Documentation on the architecture of the Garbage Collector can be
 * found in the online commentary:
 * 
 *   http://hackage.haskell.org/trac/ghc/wiki/Commentary/Rts/Storage/GC
 *
 * ---------------------------------------------------------------------------*/

#ifndef SM_SWEEP_H
#define SM_SWEEP_H

void sweep(step *gen);

#endif /* SM_SWEEP_H */
