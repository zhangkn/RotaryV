//

#import <UIKit/UIKit.h>

@class HXQActivityPrizeModel;
@interface HXQPrizePopView : UIView

-(void)showWithModel:(HXQActivityPrizeModel *)model;

@property (nonatomic, copy) void (^popShareBlock)(void);

@end
