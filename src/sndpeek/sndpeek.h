/*----------------------------------------------------------------------------
 sndpeek - real-time audio visualization tool
 
 Copyright (c) 2004 Ge Wang, Perry R. Cook, Ananya Misra.
   All rights reserved.
   http://soundlab.cs.princeton.edu/
   http://www.gewang.com/
 
 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 U.S.A.
 -----------------------------------------------------------------------------*/

//-----------------------------------------------------------------------------
// name: sndpeek.h
// desc: small real-time spectrum visualizer, originally implemented
//       by Ge Wang for the memex project and to entertain small children
//       at parties.
//
// authors: Ge Wang (http://www.gewang.com/)
//          Perry R. Cook (prc@cs.princeton.edu)
//          Ananya Misra (amisra@cs.princeton.edu)
// thanks to:
//          Yilei Shao, Qin Lv, Tom Briggs
// library:
//          (RtAudio) Gary P. Scavone (gary@ccrma.stanford.edu)
//          (FFT) CARL CMusic Distribution
//          (Marsyas) George Tzanetakis (gtzan@cs.princeton.edu)
//          (STK) Perry R. Cook (prc@cs.princeton.edu)
//          (libsndfile) Erik de Castro Lopo
// date: 11.28.2003 - initial version
//       spring 2015 - updated for OSX Yosemite
//
// usage: (type 'h' while running or see list of command line arguments)
//-----------------------------------------------------------------------------
#ifndef __SNDPEEK_H__
#define __SNDPEEK_H__


// functions
void idleFunc( );
void displayFunc( );
void reshapeFunc( int width, int height );
void keyboardFunc( unsigned char, int, int );
void mouseFunc( int button, int state, int x, int y );

int initialize_sndpeek( int argc, char ** argv );
void initialize_graphics( );
bool initialize_audio( );
void initialize_analysis( );




#endif
