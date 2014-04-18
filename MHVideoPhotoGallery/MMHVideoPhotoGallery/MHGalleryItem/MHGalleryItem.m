//
//  MHGalleryItem.m
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 01.04.14.
//  Copyright (c) 2014 Mario Hahn. All rights reserved.
//

#import "MHGalleryItem.h"

@implementation MHGalleryItem

- (instancetype)initWithImage:(UIImage*)image{
    self = [super init];
    if (!self)
        return nil;
    self.galleryType = MHGalleryTypeImage;
    self.image = image;
    return self;
}

+ (instancetype)itemWithVimeoVideoID:(NSString*)ID{
    return [self.class.alloc initWithURLString:[NSString stringWithFormat:MHVimeoBaseURL,ID]
                             galleryType:MHGalleryTypeVideo];
}

+ (instancetype)itemWithYoutubeVideoID:(NSString*)ID{
    return [self.class.alloc initWithURLString:[NSString stringWithFormat:MHYoutubeBaseURL,ID]
                             galleryType:MHGalleryTypeVideo];
}

+(instancetype)itemWithURL:(NSURL *)URL
               galleryType:(MHGalleryType)galleryType{
    
    return [self.class.alloc initWithURL:URL
                             galleryType:galleryType];
}

- (instancetype)initWithURL:(NSURL*)URL
                galleryType:(MHGalleryType)galleryType{
    self = [super init];
    if (!self)
        return nil;
    self.URL = URL;
    self.URLString=URL.absoluteString;
    self.description = nil;
    self.galleryType = galleryType;
    self.attributedString = nil;
    return self;
}
- (instancetype)initWithURLString:(NSString*)URLString
                      galleryType:(MHGalleryType)galleryType{
    self = [super init];
    if (!self)
        return nil;
    self.URLString=URLString;
    self.URL = [NSURL URLWithString:URLString];
    self.description = nil;
    self.galleryType = galleryType;
    self.attributedString = nil;
    return self;
}

+ (instancetype)itemWithURLString:(NSString*)URLString
                      galleryType:(MHGalleryType)galleryType{
    return [self.class.alloc initWithURL:[NSURL URLWithString:URLString]];
}


+(instancetype)itemWithImage:(UIImage *)image{
    return [self.class.alloc initWithImage:image];
}

@end

