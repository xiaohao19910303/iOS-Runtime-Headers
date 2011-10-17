/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUWildcatVideosViewController, IUWildcatVideoDetailViewController, IUFoldingTransitionView;

@interface IUAlbumGridViewControllerTransitionCache : NSObject  {
    unsigned int _selectedAlbumIndex;
    IUWildcatVideosViewController *_wildcatViewController;
    IUWildcatVideoDetailViewController *_controllerToPush;
    IUFoldingTransitionView *_foldingTransitionView;
}

@property unsigned int selectedAlbumIndex;
@property(retain) IUWildcatVideosViewController * wildcatViewController;
@property(retain) IUWildcatVideoDetailViewController * controllerToPush;
@property(retain) IUFoldingTransitionView * foldingTransitionView;


- (void)setFoldingTransitionView:(id)arg1;
- (id)foldingTransitionView;
- (void)setControllerToPush:(id)arg1;
- (id)controllerToPush;
- (void)setWildcatViewController:(id)arg1;
- (void)setSelectedAlbumIndex:(unsigned int)arg1;
- (unsigned int)selectedAlbumIndex;
- (id)wildcatViewController;
- (void)dealloc;

@end