type locale;

let parseISO: string => Js.Date.t;

let decodeISO: Js.Json.t => Js.Date.t;

let zonedTimeToUtc: Js.Date.t => Js.Date.t;

let differenceInSeconds: (Js.Date.t, Js.Date.t) => int;

let isPast: Js.Date.t => bool;

let isFuture: Js.Date.t => bool;

/**
 * `format(date, fmt)` returns the date as a string in the desired format, and
 * in the user's timezone.
 */
let format: (Js.Date.t, string) => string;

let formatDistance: (Js.Date.t, Js.Date.t) => string;

type formatDistanceOptions;

let formatDistanceOptions:
  (~includeSeconds: bool=?, ~addSuffix: bool=?, ~locale: locale=?, unit) =>
  formatDistanceOptions;

let formatDistanceOpt: (Js.Date.t, Js.Date.t, formatDistanceOptions) => string;

let formatDistanceToNowOpt: (Js.Date.t, formatDistanceOptions) => string;

let formatDistanceStrict: (Js.Date.t, Js.Date.t) => string;

type formatDistanceStrictOptions;

let formatDistanceStrictOptions:
  (
    ~addSuffix: bool=?,
    ~unit: string=?,
    ~roundingMethod: string=?,
    ~locale: locale=?,
    unit
  ) =>
  formatDistanceStrictOptions;

let formatDistanceToNowStrictOpt:
  (Js.Date.t, formatDistanceStrictOptions) => string;

/**
 * `formatShorter(date, withTime)` will return a string wih the format 'MMM d'.
 */
let formatPreset:
  (Js.Date.t, ~short: bool=?, ~year: bool=?, ~time: bool=?, unit) => string;
