open Belt;
/*
 Unfortunately, this is bind of `react-native-modal` Animation,
 only support for Animation type by react-native-animatable
 react-native-animatable
    ref https://github.com/oblador/react-native-animatable/blob/master/typings/react-native-animatable.d.ts#L49
 react-native-modal
    ref https://github.com/react-native-community/react-native-modal/blob/master/src/types.ts#L1
 */
[@bs.deriving jsConverter]
type animation = [
  | `bounce
  | `flash
  | `jello
  | `pulse
  | `rotate
  | `rubberBand
  | `shake
  | `swing
  | `tada
  | `wobble
  | `bounceIn
  | `bounceInDown
  | `bounceInUp
  | `bounceInLeft
  | `bounceInRight
  | `bounceOut
  | `bounceOutDown
  | `bounceOutUp
  | `bounceOutLeft
  | `bounceOutRight
  | `fadeIn
  | `fadeInDown
  | `fadeInDownBig
  | `fadeInUp
  | `fadeInUpBig
  | `fadeInLeft
  | `fadeInLeftBig
  | `fadeInRight
  | `fadeInRightBig
  | `fadeOut
  | `fadeOutDown
  | `fadeOutDownBig
  | `fadeOutUp
  | `fadeOutUpBig
  | `fadeOutLeft
  | `fadeOutLeftBig
  | `fadeOutRight
  | `fadeOutRightBig
  | `flipInX
  | `flipInY
  | `flipOutX
  | `flipOutY
  | `lightSpeedIn
  | `lightSpeedOut
  | `slideInDown
  | `slideInUp
  | `slideInLeft
  | `slideInRight
  | `slideOutDown
  | `slideOutUp
  | `slideOutLeft
  | `slideOutRight
  | `zoomIn
  | `zoomInDown
  | `zoomInUp
  | `zoomInLeft
  | `zoomInRight
  | `zoomOut
  | `zoomOutDown
  | `zoomOutUp
  | `zoomOutLeft
  | `zoomOutRight
];

[@bs.module "modal-enhanced-react-native-web"] [@react.component]
external make:
  (
    ~animationIn: string=?,
    ~animationOut: string=?,
    ~animationInTiming: float=?,
    ~animationOutTiming: float=?,
    ~avoidKeyboard: bool=?,
    ~backdropColor: string=?,
    ~backdropOpacity: float=?,
    ~backdropTransitionInTiming: float=?,
    ~backdropTransitionOutTiming: float=?,
    ~children: React.element=?,
    ~isVisible: bool=?,
    ~hideModalContentWhileAnimating: bool=?,
    ~onModalShow: unit => unit=?,
    ~onModalHide: unit => unit=?,
    ~onBackdropPress: unit => unit=?,
    ~onBackButtonPress: unit => unit=?,
    ~onSwipe: unit => unit=?,
    ~swipeThreshold: float=?,
    ~swipeDirection: [@bs.string] [ | `up | `down | `left | `right]=?,
    ~useNativeDriver: bool=?,
    ~style: ReactDOMRe.Style.t=?,
    ~scrollTo: unit => unit=?,
    ~scrollOffset: float=?,
    ~scrollOffsetMax: float=?
  ) =>
  React.element =
  "default";

let makeProps =
    (
      ~animationIn=?,
      ~animationOut=?,
      ~animationInTiming=?,
      ~animationOutTiming=?,
      ~avoidKeyboard=?,
      ~backdropColor=?,
      ~backdropOpacity=?,
      ~backdropTransitionInTiming=?,
      ~backdropTransitionOutTiming=?,
      ~children=?,
      ~isVisible,
      ~hideModalContentWhileAnimating=?,
      ~onModalShow=?,
      ~onModalHide=?,
      ~onBackdropPress=?,
      ~onBackButtonPress=?,
      ~onSwipe=?,
      ~swipeThreshold=?,
      ~swipeDirection=?,
      ~useNativeDriver=?,
      ~style=?,
      ~scrollTo=?,
      ~scrollOffset=?,
      ~scrollOffsetMax=?,
    ) =>
  makeProps(
    ~animationIn=?Option.map(animationIn, animationToJs),
    ~animationOut=?Option.map(animationOut, animationToJs),
    ~animationInTiming?,
    ~animationOutTiming?,
    ~avoidKeyboard?,
    ~backdropColor?,
    ~backdropOpacity?,
    ~backdropTransitionInTiming?,
    ~backdropTransitionOutTiming?,
    ~children?,
    ~isVisible,
    ~hideModalContentWhileAnimating?,
    ~onModalShow?,
    ~onModalHide?,
    ~onBackdropPress?,
    ~onBackButtonPress?,
    ~onSwipe?,
    ~swipeThreshold?,
    ~swipeDirection?,
    ~useNativeDriver?,
    ~style?,
    ~scrollTo?,
    ~scrollOffset?,
    ~scrollOffsetMax?,
  );
/* devTools friendly */
React.setDisplayName(make, "Modal");
