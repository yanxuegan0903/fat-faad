//
//  FAADDecoder.h
//  MEYE
//
//  Created by vsKing on 2017/7/3.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FAADDecoder : NSObject
    
    
#ifndef FAACDecoder_h
#define FAACDecoder_h
    
    void *faad_decoder_create(int sample_rate, int channels, int bit_rate);
    int faad_decode_frame(void *pParam, unsigned char *pData, int nLen, unsigned char *pPCM, unsigned int *outLen);
    void faad_decode_close(void *pParam);
    
#endif /* FAACDecoder_h */
    
    
@end
