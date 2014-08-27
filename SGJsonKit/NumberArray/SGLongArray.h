//
//  SGLongArray.h
//
//  http://github.com/dongminkim/SGJsonKit
//

#import <Foundation/Foundation.h>
#import "SGNumberArray.h"

@interface SGLongArray : NSObject <SGNumberArray, NSCopying>

@property (nonatomic, readonly) long *values;
@property (nonatomic, readonly) NSUInteger count;

- (instancetype)initWithValues:(long *)values count:(NSUInteger)count;

@end

