//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QMapView;

@interface QOverlayFloor : UIView
{
    QMapView *_mapView;
}

@property(nonatomic) __weak QMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (id)initWithMapView:(id)arg1;
- (void)updateOverlayView:(id)arg1 animated:(_Bool)arg2 animateDuraton:(double)arg3;
- (void)updateOverlayView:(id)arg1 animated:(_Bool)arg2;
- (void)updateOverlayViewsWithAnimated:(_Bool)arg1;
- (void)updateOverlayView:(id)arg1 scaleRelative20:(double)arg2 animated:(_Bool)arg3 animationDuration:(double)arg4;
- (double)scaleRelative20;
- (double)animationDurationOfBoundsProperty;

@end

