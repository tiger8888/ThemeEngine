//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Cocoa/Cocoa.h>

@class NSData;

@interface CSIBitmapWrapper : NSObject
{
    struct CGContext *_bitmapContext;
    NSData *_pixelData;
    NSData *_rawData;
    unsigned int _pixelFormat;
    unsigned int _width;
    unsigned int _height;
    unsigned long long _rowbytes;
    BOOL _allowsMultiPassEncoding;
    unsigned int _imageAlpha;
}

@property(nonatomic) unsigned int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (id)compressedData:(BOOL)arg1 usedEncoding:(int *)arg2 andRowChunkSize:(unsigned int *)arg3;
@property BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (id)pixelData;
- (void)setPixelData:(id)arg1;
- (unsigned int)sourceImageAlpha;
- (void)setSourceAlphaInfo:(unsigned int)arg1;
- (struct CGContext *)bitmapContext;
- (unsigned int)width;
- (unsigned int)height;
- (void)finalize;
- (void)dealloc;
- (id)initWithPixelWidth:(unsigned int)arg1 pixelHeight:(unsigned int)arg2;

@end
