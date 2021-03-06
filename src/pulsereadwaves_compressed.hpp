/*
===============================================================================

  FILE:  pulsereadwaves_compressed.hpp
  
  CONTENTS:
  
    Common interface for the classes that write waves raw or compressed.

  PROGRAMMERS:
  
    martin.isenburg@rapidlasso.com  -  http://rapidlasso.com
  
  COPYRIGHT:
  
    (c) 2010-2013, martin isenburg, rapidlasso - fast tools to catch reality

    This is free software; you can redistribute and/or modify it under the
    terms of the GNU Lesser General Licence as published by the Free Software
    Foundation. See the COPYING file for more information.

    This software is distributed WITHOUT ANY WARRANTY and without even the
    implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  
  CHANGE HISTORY:
  
    4 July 2012 -- created in the ECE from MUC to Salzburg enroute to AGIT  
  
===============================================================================
*/
#ifndef PULSE_READ_WAVES_COMPRESSED_HPP
#define PULSE_READ_WAVES_COMPRESSED_HPP

#include "pulsereadwaves.hpp"

class ArithmeticDecoder;
class IntegerCompressor;

class PULSEreadWaves_compressed : public PULSEreadWaves
{
public:

  BOOL init(ByteStreamIn* instream);
  BOOL read(WAVESwaves* waves);

  PULSEreadWaves_compressed();
  ~PULSEreadWaves_compressed();

private:
  ArithmeticDecoder* dec;
  IntegerCompressor* ic;
  IntegerCompressor* ic8;
  IntegerCompressor* ic16;
};

#endif
