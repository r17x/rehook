type coordinate = {
  y: int,
  x: int,
};

type scroll = {
  currPos: coordinate,
  prevPos: coordinate,
};

/**
 * useScrollPosition(({currPos,prevPos}) => {
 *  currPos->Js.log;
 *  prevPos->Js.log;
 *  None;
 * });
 */
[@bs.module "@n8tb1t/use-scroll-position"]
external useScrollPosition: ([@bs.uncurry] (scroll => option(unit))) => unit =
  "useScrollPosition";

/**
 * useScrollPosition(({currPos,prevPos}) => {
 *  currPos->Js.log;
 *  prevPos->Js.log;
 *  dep->Js.log;
 *  None;
 * }, [|dep|]);
 */
[@bs.module "@n8tb1t/use-scroll-position"]
external useScrollPosition1:
  ([@bs.uncurry] (scroll => option(unit)), array('a)) => unit =
  "useScrollPosition";

/**
 * let (elementPosition, setElementPosition) =
 *           React.useState( _ => { x: 20, y: 150 });
 *
 * let elementRef = React.useRef(None);
 *
 * useScrollPosition(
 *  ({ currPos }) => {
 *    setElementPosition(_ => currPos)
 *  }, [||], elementRef
 * );
 *
 */
[@bs.module "@n8tb1t/use-scroll-position"]
external useScrollPositionWithRef:
  ([@bs.uncurry] (scroll => option(unit)), array('a), React.Ref.t) => unit =
  "useScrollPosition";
