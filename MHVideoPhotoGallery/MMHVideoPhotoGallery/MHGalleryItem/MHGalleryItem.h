//
//  MHGalleryItem.h
//  MHVideoPhotoGallery
//
//  Created by Mario Hahn on 01.04.14.
//  Copyright (c) 2014 Mario Hahn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MHGallery.h"

typedef NS_ENUM(NSUInteger, MHGalleryType) {
    MHGalleryTypeImage,
    MHGalleryTypeVideo
};

@interface MHGalleryItem : NSObject

@property (nonatomic,strong) UIImage            *image;
@property (nonatomic,strong) NSURL              *URL;
@property (nonatomic,strong) NSString           *URLString;
@property (nonatomic,strong) NSString           *description;
@property (nonatomic,strong) NSAttributedString *attributedString;
@property (nonatomic,assign) MHGalleryType       galleryType;

/**
 *  MHGalleryItem initWithURL:galleryType
 *
 *  @param urlString   the URL of the image or Video as a String
 *  @param galleryType select to Type, video or image
 *
 */
- (instancetype)initWithURL:(NSURL*)URLString
                galleryType:(MHGalleryType)galleryType;

+ (instancetype)itemWithURL:(NSURL*)URLString
                galleryType:(MHGalleryType)galleryType;


- (instancetype)initWithURLString:(NSString*)URLString
                galleryType:(MHGalleryType)galleryType;

+ (instancetype)itemWithURLString:(NSString*)URLString
                galleryType:(MHGalleryType)galleryType;
/**
 *  MHGalleryItem itemWithYoutubeVideoID:
 *
 *  @param ID  Example: http://www.youtube.com/watch?v=YSdJtNen-EA - YSdJtNen-EA is the ID
 *
 */
+ (instancetype)itemWithYoutubeVideoID:(NSString*)ID;
/**
 *  MHGalleryItem itemWithVimeoVideoID:
 *
 *  @param ID Example: http://vimeo.com/35515926 - 35515926 is the ID
 *
 */
+ (instancetype)itemWithVimeoVideoID:(NSString*)ID;

/**
 *  MHGalleryItem initWithImage
 *
 *  @param image to Display
 *
 */
- (instancetype)initWithImage:(UIImage*)image;
+ (instancetype)itemWithImage:(UIImage*)image;

@end
