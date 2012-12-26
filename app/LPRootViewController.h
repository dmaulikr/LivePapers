#import "AFOpenFlowView.h"
#import "AFOpenFlowViewDelegate.h"
#import "AFOpenFlowViewDataSource.h"

@class LPPaper;
@class LPPreviewView;

@interface LPRootViewController: UIViewController<AFOpenFlowViewDataSource, AFOpenFlowViewDelegate> {
    AFOpenFlowView * flowView;
    UIImage * defaultImage; 
    UIImage * moreImage;
    NSMutableArray * papers;
    UILabel * label;
    UIImageView * background;
    UINavigationBar * bar;
    UINavigationItem * barItem;
    UIBarButtonItem * homeButton, * lockButton, * settingsButton;
    UIImageView * homeBadge, * lockBadge;

    NSString * homePaper, * lockPaper;

    LPPreviewView * preview;
    NSTimer * timer;
}

- (void)loadPapers;
- (void)selectedPaper:(LPPaper*)p;
- (void)saveSettings:(NSString*)s;
- (void)armTimer;
- (void)disarmTimer;
- (void)timerFired;

@end