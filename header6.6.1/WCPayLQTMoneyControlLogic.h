//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCPayAddPayCardDelegate-Protocol.h"
#import "WCPayLQTClickRedeemCgiDelegate-Protocol.h"
#import "WCPayLQTMoneyViewControllerDelegate-Protocol.h"
#import "WCPayLQTPreRedeemFundCgiDelegate-Protocol.h"
#import "WCPayLQTPurchaseFundCgiDelegate-Protocol.h"
#import "WCPayLQTQryPurchaaseResultCgiDelegate-Protocol.h"
#import "WCPayLQTRedeemFundCgiDelegate-Protocol.h"
#import "WCPayLQTTransSuccessViewControllerDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class NSString, PreRedeemFundRes, PurchaseFundRes, WCPayLQTClickRedeemCgi, WCPayLQTPreRedeemFundCgi, WCPayLQTPurchaseFundCgi, WCPayLQTQryPurchaseResultCgi, WCPayLQTRedeemFundCgi, WCPayPayMoneyLogic;
@protocol WCPayLQTMoneyControlLogicDelegate;

@interface WCPayLQTMoneyControlLogic : WCPayControlLogic <WCPayLQTPurchaseFundCgiDelegate, WCPayLQTQryPurchaaseResultCgiDelegate, WCPayLQTRedeemFundCgiDelegate, WCPayLQTMoneyViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCPayLQTTransSuccessViewControllerDelegate, WCBaseControlLogicDeleagte, WCPayLQTPreRedeemFundCgiDelegate, WCPayAddPayCardDelegate, WCPayLQTClickRedeemCgiDelegate>
{
    _Bool _bIsBindQueryAfterAddNewCard;
    id <WCPayLQTMoneyControlLogicDelegate> _logicDelegate;
    WCPayLQTPurchaseFundCgi *_prepayCgi;
    WCPayLQTQryPurchaseResultCgi *_payResultQryCgi;
    WCPayLQTPreRedeemFundCgi *_preRedeemFundCgi;
    WCPayLQTRedeemFundCgi *_redeemFundCgi;
    WCPayLQTClickRedeemCgi *_clickRedeemCgi;
    WCPayPayMoneyLogic *_payMoneyLogic;
    PurchaseFundRes *_purchaseResp;
    PreRedeemFundRes *_preRedeemResp;
    NSString *_bindSerialFromNewCard;
}

@property(retain, nonatomic) NSString *bindSerialFromNewCard; // @synthesize bindSerialFromNewCard=_bindSerialFromNewCard;
@property(nonatomic) _Bool bIsBindQueryAfterAddNewCard; // @synthesize bIsBindQueryAfterAddNewCard=_bIsBindQueryAfterAddNewCard;
@property(retain, nonatomic) PreRedeemFundRes *preRedeemResp; // @synthesize preRedeemResp=_preRedeemResp;
@property(retain, nonatomic) PurchaseFundRes *purchaseResp; // @synthesize purchaseResp=_purchaseResp;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(retain, nonatomic) WCPayLQTClickRedeemCgi *clickRedeemCgi; // @synthesize clickRedeemCgi=_clickRedeemCgi;
@property(retain, nonatomic) WCPayLQTRedeemFundCgi *redeemFundCgi; // @synthesize redeemFundCgi=_redeemFundCgi;
@property(retain, nonatomic) WCPayLQTPreRedeemFundCgi *preRedeemFundCgi; // @synthesize preRedeemFundCgi=_preRedeemFundCgi;
@property(retain, nonatomic) WCPayLQTQryPurchaseResultCgi *payResultQryCgi; // @synthesize payResultQryCgi=_payResultQryCgi;
@property(retain, nonatomic) WCPayLQTPurchaseFundCgi *prepayCgi; // @synthesize prepayCgi=_prepayCgi;
@property(nonatomic) __weak id <WCPayLQTMoneyControlLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
- (void).cxx_destruct;
- (void)onAddPayCardResult:(_Bool)arg1 newCardBindSerial:(id)arg2;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetLocalPayCardList:(id)arg1 UsrVerifiedInfo:(id)arg2 SwicthInfo:(id)arg3 BalanceInfo:(id)arg4 NoticeInfo:(id)arg5 loanEntryInfo:(id)arg6 LqtInfo:(id)arg7;
- (void)alertViewConfirmClick;
- (_Bool)gotoViewController:(id)arg1;
- (void)onPayMoneyLogicDidStop;
- (void)startPayMoneyLogicWithReqkey:(id)arg1;
- (void)onGetLQTClickRedeemCgiResp:(id)arg1;
- (void)sendClickRedeemCgi;
- (void)onGetLQTRedeemFundResp:(id)arg1;
- (void)sendRedeemRequestWithFee:(unsigned int)arg1 pwdEnString:(id)arg2;
- (void)onGetLQTPreRedeemFundResp:(id)arg1;
- (void)sendPreRedeemRequestWithFee:(unsigned int)arg1;
- (void)onGetLQTQryPurchaseResultResp:(id)arg1;
- (void)sendQryPurchaseResultFromSvr;
- (void)onGetLQTPurchaseFundResp:(id)arg1;
- (void)sendLQTPrePayRquestWithMoney:(unsigned int)arg1;
- (void)onTransSuccessViewControllerConfirmBtnClick;
- (void)onMoneyViewControllerClickAddNewCard;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1 pwdEnString:(id)arg2;
- (void)onMoneyViewControllerActionWithAmount:(id)arg1;
- (void)onMoneyViewControllerBack;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithMoneyScene:(unsigned long long)arg1 controlData:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

