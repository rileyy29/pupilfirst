open CoachesSchoolIndex__Types;

type props = {
  coaches: list(Coach.t),
  authenticityToken: string,
};

let decodeProps = json =>
  Json.Decode.{
    coaches: json |> field("coaches", list(Coach.decode)),
    authenticityToken: json |> field("authenticityToken", string),
  };

let props =
  DomUtils.parseISOAttribute(
    ~id="sa-coaches-panel",
    ~attribute="data-props",
    (),
  )
  |> decodeProps;

ReactDOMRe.renderToElementWithId(
  <SA_Coaches_SchoolIndex
    coaches={props.coaches}
    authenticityToken={props.authenticityToken}
  />,
  "sa-coaches-panel",
);
